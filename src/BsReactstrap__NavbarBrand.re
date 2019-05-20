[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~href: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavbarBrand";
