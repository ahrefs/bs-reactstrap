[@bs.module "reactstrap"] external inputGroupButtonDropdown : ReasonReact.reactClass = "InputGroupButtonDropdown";

[@bs.obj]
external makeProps : (
  ~addonType: 'a,
  ~children: 'b=?,
  unit
) => _ = "";

let make = (
  ~addonType,
  ~children=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButtonDropdown,
    ~props=makeProps(
      ~addonType,
      ~children?,
      ()
    ),
    children
  );
