[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~body: bool=?,
    ~bottom: bool=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~heading: bool=?,
    ~left: bool=?,
    ~list: bool=?,
    ~middle: bool=?,
    ~object_: bool=?,
    ~right: bool=?,
    ~tag: 'b=?,
    ~top: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Media";
