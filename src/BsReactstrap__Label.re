[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~hidden: bool=?,
    ~check: bool=?,
    ~size: string=?,
    ~for_: string=?,
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~xs: 'b=?,
    ~sm: 'c=?,
    ~md: 'd=?,
    ~lg: 'e=?,
    ~xl: 'f=?,
    ~widths: 'g=?,
    unit
  ) =>
  React.element =
  "Label";
