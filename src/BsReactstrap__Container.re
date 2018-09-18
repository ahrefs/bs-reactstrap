[@bs.module "reactstrap"]
external container: ReasonReact.reactClass = "Container";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~fluid: bool=?, ~className: string=?, ~cssModule: 'b=?, unit) =>
  _ =
  "";

let make = (~tag=?, ~fluid=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=container,
    ~props=makeProps(~tag?, ~fluid?, ~className?, ~cssModule?, ()),
    children,
  );
