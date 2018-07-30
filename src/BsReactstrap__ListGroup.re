[@bs.module "reactstrap"] external listGroup : ReasonReact.reactClass = "ListGroup";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~flush: bool=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~flush=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listGroup,
    ~props=makeProps(
      ~tag?,
      ~flush?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
