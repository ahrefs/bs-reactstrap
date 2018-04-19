[@bs.module "reactstrap"] external formFeedback : ReasonReact.reactClass = "FormFeedback";

[@bs.obj]
external makeProps : (
  ~tag: string=?,
  ~className: string=?,
  ~cssModule: 'a=?,
  ~valid: bool=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~valid=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formFeedback,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ~valid?,
      ()
    ),
    children
  );
