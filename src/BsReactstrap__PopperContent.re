[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~placement: string=?,
    ~placementPrefix: string=?,
    ~hideArrow: bool=?,
    ~tag: string=?,
    ~isOpen: bool,
    ~cssModule: 'a=?,
    ~offset: 'b=?,
    ~fallbackPlacement: 'c=?,
    ~flip: bool=?,
    ~container: 'd=?,
    ~target: 'e,
    ~modifiers: 'f=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PopperContent";
