[@bs.module "reactstrap"] external popperContent : ReasonReact.reactClass = "PopperContent";

[@bs.obj]
external makeProps : (
  ~children: 'a,
  ~className: string=?,
  ~placement: string=?,
  ~placementPrefix: string=?,
  ~hideArrow: bool=?,
  ~tag: string=?,
  ~isOpen: bool,
  ~cssModule: 'b=?,
  ~offset: 'c=?,
  ~fallbackPlacement: 'd=?,
  ~flip: bool=?,
  ~container: 'e=?,
  ~target: 'f,
  ~modifiers: 'g=?,
  unit
) => _ = "";

let make = (
  ~children,
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
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=popperContent,
    ~props=makeProps(
      ~children,
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
      ()
    ),
    children
  );
