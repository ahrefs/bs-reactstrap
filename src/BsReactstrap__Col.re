[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~xs: 'b=?,
    ~sm: 'c=?,
    ~md: 'd=?,
    ~lg: 'e=?,
    ~xl: 'f=?,
    ~className: string=?,
    ~cssModule: 'g=?,
    ~widths: 'h=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Col";
