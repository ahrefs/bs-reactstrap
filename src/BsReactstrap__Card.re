[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~inverse: bool=?,
    ~color: string=?,
    ~block: 'b=?,
    ~body: bool=?,
    ~outline: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Card";
