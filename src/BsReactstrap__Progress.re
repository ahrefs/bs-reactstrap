[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~bar: bool=?,
    ~multi: bool=?,
    ~tag: string=?,
    ~value: 'a=?,
    ~max: 'b=?,
    ~animated: bool=?,
    ~striped: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~barClassName: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Progress";
