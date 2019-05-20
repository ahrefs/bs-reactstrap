[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~inline: bool=?,
    ~tag: 'a=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "FormText";
