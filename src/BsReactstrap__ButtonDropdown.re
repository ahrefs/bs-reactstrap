[@bs.module "reactstrap"] external buttonDropdown : ReasonReact.reactClass = "ButtonDropdown";

[@bs.obj]
external makeProps : (

  unit
) => _ = "";

let make = (

  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonDropdown,
    ~props=makeProps(

      ()
    ),
    children
  );
