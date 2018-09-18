[@bs.module "reactstrap"]
external inputGroupAddon: ReasonReact.reactClass = "InputGroupAddon";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~addonType: 'b, ~className: string=?, ~cssModule: 'c=?, unit) =>
  _ =
  "";

let make = (~tag=?, ~addonType, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupAddon,
    ~props=makeProps(~tag?, ~addonType, ~className?, ~cssModule?, ()),
    children,
  );
