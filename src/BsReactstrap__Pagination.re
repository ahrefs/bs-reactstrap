[@bs.module "reactstrap"]
external pagination: ReasonReact.reactClass = "Pagination";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~listClassName: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~tag: 'b=?,
    ~listTag: 'c=?,
    ~ariaLabel: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~listClassName=?,
      ~cssModule=?,
      ~size=?,
      ~tag=?,
      ~listTag=?,
      ~ariaLabel=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=pagination,
    ~props=
      makeProps(
        ~className?,
        ~listClassName?,
        ~cssModule?,
        ~size?,
        ~tag?,
        ~listTag?,
        ~ariaLabel?,
        (),
      ),
    children,
  );
