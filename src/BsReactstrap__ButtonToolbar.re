[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~role: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonToolbar";
