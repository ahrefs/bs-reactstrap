[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~wrapTag: 'b=?,
    ~toggle: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~closeAriaLabel: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ModalHeader";
