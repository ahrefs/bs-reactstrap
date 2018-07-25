[@bs.module "reactstrap"]
external jumbotron : ReasonReact.reactClass = "Jumbotron";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  fluid: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~fluid=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=jumbotron,
    ~props=props(~tag?, ~fluid?, ~className?, ~cssModule?, ()),
    children,
  );