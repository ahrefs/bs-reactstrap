[@bs.module "reactstrap"]
external inputGroupText: ReasonReact.reactClass = "InputGroupText";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupText,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
