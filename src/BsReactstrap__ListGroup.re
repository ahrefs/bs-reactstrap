[@bs.module "reactstrap"]
external listGroup : ReasonReact.reactClass = "ListGroup";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  flush: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~flush=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listGroup,
    ~props=props(~tag?, ~flush?, ~className?, ~cssModule?, ()),
    children,
  );