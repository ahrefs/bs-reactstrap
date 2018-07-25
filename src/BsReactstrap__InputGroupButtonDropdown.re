[@bs.module "reactstrap"]
external inputGroupButtonDropdown : ReasonReact.reactClass =
  "InputGroupButtonDropdown";

type addonType;

[@bs.deriving abstract]
type props = {addonType};

let make = (~addonType, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButtonDropdown,
    ~props=props(~addonType),
    children,
  );
