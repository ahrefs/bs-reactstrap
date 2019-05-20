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
    unit
  ) =>
  React.element =
  "Popover";
