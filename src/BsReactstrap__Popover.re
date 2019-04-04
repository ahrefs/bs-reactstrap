[@bs.module "reactstrap"] external popover: ReasonReact.reactClass = "Popover";

[@bs.obj]
external makeProps:
  (
    ~placement: 'a=?,
    ~target: 'b,
    ~trigger: string=?,
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
  _ =
  "";

let make =
    (
      ~placement=?,
      ~target,
      ~trigger=?,
      ~container=?,
      ~isOpen=?,
      ~disabled=?,
      ~hideArrow=?,
      ~className=?,
      ~innerClassName=?,
      ~placementPrefix=?,
      ~cssModule=?,
      ~toggle=?,
      ~delay=?,
      ~modifiers=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=popover,
    ~props=
      makeProps(
        ~placement?,
        ~target,
        ~trigger?,
        ~container?,
        ~isOpen?,
        ~disabled?,
        ~hideArrow?,
        ~className?,
        ~innerClassName?,
        ~placementPrefix?,
        ~cssModule?,
        ~toggle?,
        ~delay?,
        ~modifiers?,
        (),
      ),
    children,
  );
