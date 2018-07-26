open BsReactstrap__Props;

[@bs.module "reactstrap"]
external paginationItem : ReasonReact.reactClass = "PaginationItem";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  tag,
};

let make =
    (~active=?, ~className=?, ~cssModule=?, ~disabled=?, ~tag=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationItem,
    ~props=props(~active?, ~className?, ~cssModule?, ~disabled?, ~tag?, ()),
    children,
  );
