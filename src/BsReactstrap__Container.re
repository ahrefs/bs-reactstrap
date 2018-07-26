open BsReactstrap__Props;

[@bs.module "reactstrap"]
external container : ReasonReact.reactClass = "Container";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  fluid: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~fluid=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=container,
    ~props=props(~tag?, ~fluid?, ~className?, ~cssModule?, ()),
    children,
  );
