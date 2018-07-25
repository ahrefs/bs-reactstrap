open BsReactstrap__Props;

[@bs.module "reactstrap"]
external popperContent : ReasonReact.reactClass = "PopperContent";

type offset;
type fallbackPlacement;
type container;
type target;
type modifiers;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  placement: string,
  [@bs.optional]
  placementPrefix: string,
  [@bs.optional]
  hideArrow: bool,
  [@bs.optional]
  tag: string,
  isOpen: bool,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  offset,
  [@bs.optional]
  fallbackPlacement,
  [@bs.optional]
  flip: bool,
  [@bs.optional]
  container,
  target,
  [@bs.optional]
  modifiers,
};

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
      props(
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
