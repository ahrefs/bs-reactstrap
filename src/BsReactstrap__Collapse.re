[@bs.module "reactstrap"]
external collapse: ReasonReact.reactClass = "Collapse";

[@bs.obj]
// Transition Proptypes based on this https://github.com/reactjs/react-transition-group/blob/master/src/Transition.js
external makeProps:
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
    // End of transition props
    ~isOpen: bool=?,
    ~tag: 'a=?,
    ~className: 'b=?,
    ~navbar: bool=?,
    ~cssModule: 'c=?,
    ~innerRef: 'd=?,
    unit
  ) =>
  _ =
  "";

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
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=collapse,
    ~props=
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