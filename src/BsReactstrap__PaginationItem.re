[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~tag: 'b=?,
    unit
  ) =>
  React.element =
  "PaginationItem";
