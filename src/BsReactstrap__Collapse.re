[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~_in: bool=?,
    ~mountOnEnter: bool=?,
    ~unmountOnExit: bool=?,
    ~appear: bool=?,
    ~enter: bool=?,
    ~exit: bool=?,
    ~onEnter: ('htmlElement, bool) => unit=?,
    ~onEntering: ('htmlElement, bool) => unit=?,
    ~onEntered: ('htmlElement, bool) => unit=?,
    ~onExit: 'htmlElement => unit=?,
    ~onExiting: 'htmlElement => unit=?,
    ~onExited: 'htmlElement => unit=?,
    ~isOpen: bool=?,
    ~tag: 'a=?,
    ~className: 'b=?,
    ~navbar: bool=?,
    ~cssModule: 'c=?,
    ~innerRef: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Collapse";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~appear=?,
        ~enter=?,
        ~exit=?,
        ~in_=?,
        ~mountOnEnter=?,
        ~onEnter=?,
        ~onEntered=?,
        ~onEntering=?,
        ~onExit=?,
        ~onExited=?,
        ~onExiting=?,
        ~unmountOnExit=?,
        ~isOpen=?,
        ~tag=?,
        ~className=?,
        ~navbar=?,
        ~cssModule=?,
        ~innerRef=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~_in=?in_,
        ~appear?,
        ~enter?,
        ~exit?,
        ~isOpen?,
        ~mountOnEnter?,
        ~onEnter?,
        ~onEntered?,
        ~onEntering?,
        ~onExit?,
        ~onExited?,
        ~onExiting?,
        ~tag?,
        ~unmountOnExit?,
        ~className?,
        ~navbar?,
        ~cssModule?,
        ~innerRef?,
        (),
      ),
      children,
    );
  };
};