[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  React.element =
  "InputGroup";
