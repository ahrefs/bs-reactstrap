[@bs.module "reactstrap"]
external inputGroupButtonDropdown: ReasonReact.reactClass =
  "InputGroupButtonDropdown";

[@bs.obj]
external makeProps:
  (~addonType: [@bs.string] [ | `prepend | `append], unit) => _ =
  "";

let make = (~addonType, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButtonDropdown,
    ~props=makeProps(~addonType, ()),
    children,
  );
