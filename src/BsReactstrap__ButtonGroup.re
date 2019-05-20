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
    unit
  ) =>
  React.element =
  "ButtonGroup";
