[@bs.module "reactstrap"] external tooltip: ReasonReact.reactClass = "Tooltip";

[@bs.obj]
external makeProps:
  (
    ~placement: 'a=?,
    ~target: 'b,
    ~container: 'c=?,
    ~isOpen: bool=?,
    ~disabled: bool=?,
    ~hideArrow: bool=?,
    ~className: string=?,
    ~innerClassName: string=?,
    ~cssModule: 'd=?,
    ~toggle: 'e=?,
    ~autohide: bool=?,
    ~placementPrefix: string=?,
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
      ~container=?,
      ~isOpen=?,
      ~disabled=?,
      ~hideArrow=?,
      ~className=?,
      ~innerClassName=?,
      ~cssModule=?,
      ~toggle=?,
      ~autohide=?,
      ~placementPrefix=?,
      ~delay=?,
      ~modifiers=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tooltip,
    ~props=
      makeProps(
        ~placement?,
        ~target,
        ~container?,
        ~isOpen?,
        ~disabled?,
        ~hideArrow?,
        ~className?,
        ~innerClassName?,
        ~cssModule?,
        ~toggle?,
        ~autohide?,
        ~placementPrefix?,
        ~delay?,
        ~modifiers?,
        (),
      ),
    children,
  );
