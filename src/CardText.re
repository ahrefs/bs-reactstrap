[@bs.module "reactstrap"] external cardText : ReasonReact.reactClass = "CardText";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardText,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
