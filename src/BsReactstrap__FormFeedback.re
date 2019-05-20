[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~valid: bool=?,
    unit
  ) =>
  React.element =
  "FormFeedback";
