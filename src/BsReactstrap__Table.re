[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~bordered: bool=?,
    ~borderless: bool=?,
    ~striped: bool=?,
    ~inverse: 'b=?,
    ~dark: bool=?,
    ~hover: bool=?,
    ~responsive: 'c=?,
    ~tag: 'd=?,
    ~responsiveTag: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Table";
