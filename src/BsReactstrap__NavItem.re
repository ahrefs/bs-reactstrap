[@bs.module "reactstrap"] external navItem : ReasonReact.reactClass = "NavItem";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~active: bool=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~active=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navItem,
    ~props=makeProps(
      ~tag?,
      ~active?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
