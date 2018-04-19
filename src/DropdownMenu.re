[@bs.module "reactstrap"] external dropdownMenu : ReasonReact.reactClass = "DropdownMenu";

[@bs.obj]
external makeProps : (
  ~tag: string=?,
  ~children: 'a,
  ~right: bool=?,
  ~flip: bool=?,
  ~modifiers: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~children,
  ~right=?,
  ~flip=?,
  ~modifiers=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownMenu,
    ~props=makeProps(
      ~tag?,
      ~children,
      ~right?,
      ~flip?,
      ~modifiers?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
