[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~valid: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "FormFeedback";
