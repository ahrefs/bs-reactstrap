[@bs.module "reactstrap"] external cardSubtitle : ReasonReact.reactClass = "CardSubtitle";

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
    ~reactClass=cardSubtitle,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
