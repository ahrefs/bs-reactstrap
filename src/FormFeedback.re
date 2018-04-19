[@bs.module "reactstrap"] external formFeedback : ReasonReact.reactClass = "FormFeedback";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~tag: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~valid: bool=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~valid=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formFeedback,
    ~props=makeProps(
      ~children?,
      ~tag?,
      ~className?,
      ~cssModule?,
      ~valid?,
      ()
    ),
    children
  );
