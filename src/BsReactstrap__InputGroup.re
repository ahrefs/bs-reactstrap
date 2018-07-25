[@bs.module "reactstrap"]
external inputGroup : ReasonReact.reactClass = "InputGroup";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  size: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~size=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroup,
    ~props=props(~tag?, ~size?, ~className?, ~cssModule?, ()),
    children,
  );