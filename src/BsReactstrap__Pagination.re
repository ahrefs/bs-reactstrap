[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Pagination";
