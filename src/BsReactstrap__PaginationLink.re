[@bs.module "reactstrap"]
external paginationLink: ReasonReact.reactClass = "PaginationLink";

[@bs.obj]
external makeProps:
  (
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~next: bool=?,
    ~previous: bool=?,
    ~tag: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~ariaLabel=?,
      ~className=?,
      ~cssModule=?,
      ~next=?,
      ~previous=?,
      ~tag=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationLink,
    ~props=
      makeProps(
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~next?,
        ~previous?,
        ~tag?,
        (),
      ),
    children,
  );
