[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~autoFocus: bool=?,
    ~centered: bool=?,
    ~size: string=?,
    ~toggle: 'a=?,
    ~keyboard: bool=?,
    ~role: string=?,
    ~labelledBy: string=?,
    ~backdrop: 'b=?,
    ~onEnter: 'c=?,
    ~onExit: 'd=?,
    ~onOpened: 'e=?,
    ~onClosed: 'f=?,
    ~className: string=?,
    ~wrapClassName: string=?,
    ~modalClassName: string=?,
    ~backdropClassName: string=?,
    ~contentClassName: string=?,
    ~external_: 'g=?,
    ~fade: bool=?,
    ~cssModule: 'h=?,
    ~zIndex: 'i=?,
    ~backdropTransition: 'j=?,
    ~modalTransition: 'k=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Modal";
