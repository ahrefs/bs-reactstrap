[@bs.module "reactstrap"]
external formFeedback: ReasonReact.reactClass = "FormFeedback";

[@bs.obj]
external makeProps:
  (
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~valid: bool=?,
    ~tooltip: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~tag=?, ~className=?, ~cssModule=?, ~valid=?, ~tooltip=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formFeedback,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ~valid?, ~tooltip?, ()),
    children,
  );