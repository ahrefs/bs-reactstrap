[@bs.module "reactstrap"]
external cardColumns: ReasonReact.reactClass = "CardColumns";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardColumns,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
