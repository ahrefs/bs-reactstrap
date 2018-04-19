[@bs.module "reactstrap"] external collapse : ReasonReact.reactClass = "Collapse";

[@bs.obj]
external makeProps : (
  ~isOpen: bool=?,
  ~children: 'a=?,
  ~tag: 'b=?,
  ~className: 'c=?,
  ~navbar: bool=?,
  ~cssModule: 'd=?,
  unit
) => _ = "";

let make = (
  ~isOpen=?,
  ~children=?,
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
      ~children?,
      ~tag?,
      ~className?,
      ~navbar?,
      ~cssModule?,
      ()
    ),
    children
  );
