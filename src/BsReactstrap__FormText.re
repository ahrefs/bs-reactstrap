[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~inline: bool=?,
    ~tag: 'a=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  React.element =
  "FormText";
