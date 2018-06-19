[@bs.module "reactstrap"]
external buttonDropdown : ReasonReact.reactClass = "ButtonDropdown";

[@bs.obj]
external makeProps :
  (~isOpen: bool=?, ~toggle: ReactEventRe.Mouse.t => unit=?, unit) => _ =
  "";

let make = (~isOpen=?, ~toggle=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonDropdown,
    ~props=makeProps(~isOpen?, ~toggle?, ()),
    children,
  );
