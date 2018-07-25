open BsReactstrap__Props;

[@bs.module "reactstrap"]
external popover : ReasonReact.reactClass = "Popover";

type target;
type placement;
type toggle;
type delay;
type modifiers;
type container;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  placement,
  target,
  [@bs.optional]
  container,
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  hideArrow: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  innerClassName: string,
  [@bs.optional]
  placementPrefix: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  toggle,
  [@bs.optional]
  delay,
  [@bs.optional]
  modifiers,
};

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
      props(
        ~placement?,
        ~target,
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
