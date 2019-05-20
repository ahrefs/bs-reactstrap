[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  React.element =
  "BreadcrumbItem";
