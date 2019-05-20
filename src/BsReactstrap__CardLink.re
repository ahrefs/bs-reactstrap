[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  React.element =
  "CardLink";
