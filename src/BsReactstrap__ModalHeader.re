[@bs.module "reactstrap"] external modalHeader : ReasonReact.reactClass = "ModalHeader";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~wrapTag: 'b=?,
  ~toggle: 'c=?,
  ~className: string=?,
  ~cssModule: 'd=?,
  ~closeAriaLabel: string=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~wrapTag=?,
  ~toggle=?,
  ~className=?,
  ~cssModule=?,
  ~closeAriaLabel=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalHeader,
    ~props=makeProps(
      ~tag?,
      ~wrapTag?,
      ~toggle?,
      ~className?,
      ~cssModule?,
      ~closeAriaLabel?,
      ()
    ),
    children
  );
