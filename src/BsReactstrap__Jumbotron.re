open BsReactstrap__Props;

[@bs.module "reactstrap"]
external jumbotron : ReasonReact.reactClass = "Jumbotron";

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
    ~reactClass=jumbotron,
    ~props=props(~tag?, ~fluid?, ~className?, ~cssModule?, ()),
    children,
  );
