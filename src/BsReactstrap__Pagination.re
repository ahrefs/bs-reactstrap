[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~tag: 'b=?,
    unit
  ) =>
  React.element =
  "Pagination";
