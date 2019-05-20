[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~caret: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~onClick: 'b=?,
    ~ariaHaspopup: bool=?,
    ~split: bool=?,
    ~tag: 'c=?,
    ~nav: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownToggle";
