[@bs.module "reactstrap"] [@react.component]
external make:
  (~isOpen: bool=?, ~tag: 'a=?, ~className: 'b=?, ~navbar: bool=?, ~cssModule: 'c=?, unit) =>
  React.element =
  "Collapse";