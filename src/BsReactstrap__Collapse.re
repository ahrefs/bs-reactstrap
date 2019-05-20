[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~tag: 'a=?,
    ~className: 'b=?,
    ~navbar: bool=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Collapse";
