[@bs.module "reactstrap"]
external popperContent: ReasonReact.reactClass = "PopperContent";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~popperClassName: string=?,
    ~placement: string=?,
    ~placementPrefix: string=?,
    ~arrowClassName: string=?,
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
    ~boundariesElement: 'g=?,
    ~onClosed: 'h=?,
    ~fade: bool=?,
    ~transition: 'i=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~popperClassName=?,
      ~placement=?,
      ~placementPrefix=?,
      ~hideArrow=?,
      ~tag=?,
      ~isOpen,
      ~cssModule=?,
      ~offset=?,
      ~fallbackPlacement=?,
      ~flip=?,
      ~container=?,
      ~target,
      ~modifiers=?,
      ~boundariesElement=?,
      ~onClosed=?,
      ~fade=?,
      ~transition=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=popperContent,
    ~props=
      makeProps(
        ~className?,
        ~popperClassName?,
        ~placement?,
        ~placementPrefix?,
        ~hideArrow?,
        ~tag?,
        ~isOpen,
        ~cssModule?,
        ~offset?,
        ~fallbackPlacement?,
        ~flip?,
        ~container?,
        ~target,
        ~modifiers?,
        ~boundariesElement?,
        ~onClosed?,
        ~fade?,
        ~transition?,
        (),
      ),
    children,
  );
