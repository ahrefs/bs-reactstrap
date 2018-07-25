[@bs.module "reactstrap"]
external paginationItem : ReasonReact.reactClass = "PaginationItem";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
};

let make =
    (~active=?, ~className=?, ~cssModule=?, ~disabled=?, ~tag=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationItem,
    ~props=props(~active?, ~className?, ~cssModule?, ~disabled?, ~tag?, ()),
    children,
  );