[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~inline: bool=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  React.element =
  "Form";
