[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~row: bool=?,
    ~check: bool=?,
    ~inline: bool=?,
    ~disabled: bool=?,
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    unit
  ) =>
  React.element =
  "FormGroup";