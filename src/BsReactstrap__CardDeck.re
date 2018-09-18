[@bs.module "reactstrap"]
external cardDeck: ReasonReact.reactClass = "CardDeck";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardDeck,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
