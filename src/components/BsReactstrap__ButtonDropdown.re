[@bs.module "reactstrap"]
external buttonDropdown : ReasonReact.reactClass = "ButtonDropdown";
type toggle;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  toggle,
};

let make = (~isOpen=?, ~toggle=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonDropdown,
    ~props=props(~isOpen?, ~toggle?, ()),
    children,
  );