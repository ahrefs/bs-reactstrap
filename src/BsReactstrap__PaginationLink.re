[@bs.module "reactstrap"]
external paginationLink : ReasonReact.reactClass = "PaginationLink";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  ariaLabel: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  next: bool,
  [@bs.optional]
  previous: bool,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
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