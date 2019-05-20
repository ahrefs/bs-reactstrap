[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: string=?,
    ~right: bool=?,
    ~flip: bool=?,
    ~modifiers: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownMenu";
