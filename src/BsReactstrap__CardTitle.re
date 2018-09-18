[@bs.module "reactstrap"]
external cardTitle: ReasonReact.reactClass = "CardTitle";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardTitle,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
