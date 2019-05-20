[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavItem";
