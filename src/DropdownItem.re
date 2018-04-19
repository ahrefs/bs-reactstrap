[@bs.module "reactstrap"] external dropdownItem : ReasonReact.reactClass = "DropdownItem";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~active: bool=?,
  ~disabled: bool=?,
  ~divider: bool=?,
  ~tag: 'b=?,
  ~header: bool=?,
  ~onClick: 'c=?,
  ~className: string=?,
  ~cssModule: 'd=?,
  ~toggle: bool=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~active=?,
  ~disabled=?,
  ~divider=?,
  ~tag=?,
  ~header=?,
  ~onClick=?,
  ~className=?,
  ~cssModule=?,
  ~toggle=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownItem,
    ~props=makeProps(
      ~children?,
      ~active?,
      ~disabled?,
      ~divider?,
      ~tag?,
      ~header?,
      ~onClick?,
      ~className?,
      ~cssModule?,
      ~toggle?,
      ()
    ),
    children
  );
