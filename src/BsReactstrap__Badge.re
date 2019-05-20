[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~color: string=?,
    ~pill: bool=?,
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Badge";
