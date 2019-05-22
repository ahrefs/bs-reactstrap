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

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~wrapTag=?,
        ~toggle=?,
        ~className=?,
        ~cssModule=?,
        ~closeAriaLabel=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~wrapTag?,
        ~toggle?,
        ~className?,
        ~cssModule?,
        ~closeAriaLabel?,
        ~children,
        (),
      ),
      children,
    );
  };
};
