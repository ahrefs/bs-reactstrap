[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~top: bool=?,
    ~bottom: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~src: string=?,
    unit
  ) =>
  React.element =
  "CardImg";
