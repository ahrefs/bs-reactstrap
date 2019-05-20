[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~disabled: bool=?,
    ~divider: bool=?,
    ~tag: 'a=?,
    ~header: bool=?,
    ~onClick: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~toggle: bool=?,
    unit
  ) =>
  React.element =
  "DropdownItem";
