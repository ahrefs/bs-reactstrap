[@bs.module "reactstrap"]
external popperContent: ReasonReact.reactClass = "PopperContent";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~placement: string=?,
    ~placementPrefix: string=?,
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
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
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
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=popperContent,
    ~props=
      makeProps(
        ~className?,
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
        (),
      ),
    children,
  );
