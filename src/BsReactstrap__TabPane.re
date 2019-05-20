[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~tabId: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "TabPane";
