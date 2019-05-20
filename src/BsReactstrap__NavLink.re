[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~disabled: bool=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~onClick: 'd=?,
    ~href: 'e=?,
    unit
  ) =>
  React.element =
  "NavLink";
