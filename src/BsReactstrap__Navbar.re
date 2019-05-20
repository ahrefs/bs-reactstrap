[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~light: bool=?,
    ~dark: bool=?,
    ~inverse: 'a=?,
    ~full: bool=?,
    ~fixed: string=?,
    ~sticky: string=?,
    ~color: string=?,
    ~role: string=?,
    ~tag: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~toggleable: 'd=?,
    ~expand: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Navbar";
