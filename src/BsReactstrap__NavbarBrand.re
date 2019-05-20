[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~href: string=?,
    unit
  ) =>
  React.element =
  "NavbarBrand";
