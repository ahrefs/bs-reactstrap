[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PaginationItem";
