[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~activeTab: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  React.element =
  "TabContent";
