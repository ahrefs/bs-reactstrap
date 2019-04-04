[@bs.module "reactstrap"] external fade: ReasonReact.reactClass = "Fade";

type htmlElement;
[@bs.obj]
// Transition Props
external makeProps:
  (
    ~_in: bool=?,
    ~mountOnEnter: bool=?,
    ~unmountOnExit: bool=?,
    ~appear: bool=?,
    ~enter: bool=?,
    ~exit: bool=?,
    ~onEnter: (htmlElement, bool) => unit=?,
    ~onEntering: (htmlElement, bool) => unit=?,
    ~onEntered: (htmlElement, bool) => unit=?,
    ~onExit: htmlElement => unit=?,
    ~onExiting: htmlElement => unit=?,
    ~onExited: htmlElement => unit=?,
    // End of transition props
    ~tag: 'a=?,
    ~baseClass: string=?,
    ~baseClassActive: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~innerRef: 'c=?,
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
      ~tag=?,
      ~baseClass=?,
      ~baseClassActive=?,
      ~className=?,
      ~cssModule=?,
      ~innerRef=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=fade,
    ~props=
      makeProps(
        ~appear?,
        ~enter?,
        ~exit?,
        ~_in=?in_,
        ~mountOnEnter?,
        ~onEnter?,
        ~onEntered?,
        ~onEntering?,
        ~onExit?,
        ~onExited?,
        ~onExiting?,
        ~unmountOnExit?,
        ~tag?,
        ~baseClass?,
        ~baseClassActive?,
        ~className?,
        ~cssModule?,
        ~innerRef?,
        (),
      ),
    children,
  );
