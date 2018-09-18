[@bs.module "reactstrap"]
external jumbotron: ReasonReact.reactClass = "Jumbotron";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~fluid: bool=?, ~className: string=?, ~cssModule: 'b=?, unit) =>
  _ =
  "";

let make = (~tag=?, ~fluid=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=jumbotron,
    ~props=makeProps(~tag?, ~fluid?, ~className?, ~cssModule?, ()),
    children,
  );
