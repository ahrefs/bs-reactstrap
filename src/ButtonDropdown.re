[@bs.module "reactstrap"] external buttonDropdown : ReasonReact.reactClass = "ButtonDropdown";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonDropdown,
    ~props=makeProps(
      ~children?,
      ()
    ),
    children
  );
