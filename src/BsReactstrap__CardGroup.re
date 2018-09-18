[@bs.module "reactstrap"]
external cardGroup: ReasonReact.reactClass = "CardGroup";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardGroup,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
