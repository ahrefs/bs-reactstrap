[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~role: string=?,
    ~size: string=?,
    ~vertical: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonGroup";
