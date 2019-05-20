[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~placement: 'a=?,
    ~target: 'b,
    ~container: 'c=?,
    ~isOpen: bool=?,
    ~disabled: bool=?,
    ~hideArrow: bool=?,
    ~className: string=?,
    ~innerClassName: string=?,
    ~placementPrefix: string=?,
    ~cssModule: 'd=?,
    ~toggle: 'e=?,
    ~delay: 'f=?,
    ~modifiers: 'g=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Popover";
