[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~baseClass: string=?,
    ~baseClassActive: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Fade";
