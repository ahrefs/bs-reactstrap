[@bs.module "reactstrap"] [@react.component]
external make:
  (~isOpen: bool=?, ~toggle: ReactEvent.Mouse.t => unit=?, unit) =>
  React.element =
  "ButtonDropdown";
