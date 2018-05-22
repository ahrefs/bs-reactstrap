[@bs.module "reactstrap"] external cardLink : ReasonReact.reactClass = "CardLink";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~innerRef: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~innerRef=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardLink,
    ~props=makeProps(
      ~tag?,
      ~innerRef?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
