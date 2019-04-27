[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~addonType: 'b,
    ~groupClassName: string=?,
    ~groupAttributes: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    unit
  ) =>
  React.element =
  "InputGroupButton";