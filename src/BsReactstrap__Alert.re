[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~closeClassName: string=?,
    ~closeAriaLabel: string=?,
    ~cssModule: 'a=?,
    ~color: string=?,
    ~isOpen: bool=?,
    ~toggle: 'b=?,
    ~tag: 'c=?,
    ~transition: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Alert";
