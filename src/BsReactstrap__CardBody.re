[@bs.module "reactstrap"] external cardBody : ReasonReact.reactClass = "CardBody";

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
    ~reactClass=cardBody,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
