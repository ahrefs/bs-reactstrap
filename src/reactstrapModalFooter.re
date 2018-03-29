[@bs.module "reactstrap"] external modalFooter : ReasonReact.reactClass = "ModalFooter";

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
    ~reactClass=modalFooter,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
