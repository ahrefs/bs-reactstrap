[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~addonType: 'b,
    ~groupClassName: string=?,
    ~groupAttributes: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "InputGroupButton";
