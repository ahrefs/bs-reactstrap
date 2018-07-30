[@bs.module "reactstrap"] external collapse : ReasonReact.reactClass = "Collapse";

[@bs.obj]
external makeProps : (
  ~isOpen: bool=?,
  ~tag: 'a=?,
  ~className: 'b=?,
  ~navbar: bool=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~isOpen=?,
  ~tag=?,
  ~className=?,
  ~navbar=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=makeProps(
      ~isOpen?,
      ~tag?,
      ~className?,
      ~navbar?,
      ~cssModule?,
      ()
    ),
    children
  );
