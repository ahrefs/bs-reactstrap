[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~noGutters: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Row";
