[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~block: bool=?,
    ~color: string=?,
    ~disabled: bool=?,
    ~outline: bool=?,
    ~tag: 'a=?,
    ~id: string=?,
    ~innerRef: 'b=?,
    ~onClick: 'c=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Button";
