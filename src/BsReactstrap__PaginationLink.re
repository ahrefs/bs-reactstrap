open BsReactstrap__Props;

[@bs.module "reactstrap"]
external paginationLink : ReasonReact.reactClass = "PaginationLink";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  ariaLabel: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  next: bool,
  [@bs.optional]
  previous: bool,
  [@bs.optional]
  tag,
};

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
      props(
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
