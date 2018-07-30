[@bs.module "reactstrap"] external cardFooter : ReasonReact.reactClass = "CardFooter";

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
    ~reactClass=cardFooter,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
