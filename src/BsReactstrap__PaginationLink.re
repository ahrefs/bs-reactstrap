[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~next: bool=?,
    ~previous: bool=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PaginationLink";
