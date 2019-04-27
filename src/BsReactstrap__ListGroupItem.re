[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~active: bool=?,
    ~disabled: bool=?,
    ~color: string=?,
    ~action: bool=?,
    ~className: 'b=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  React.element =
  "ListGroupItem";