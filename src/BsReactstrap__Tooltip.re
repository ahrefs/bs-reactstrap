open BsReactstrap__Props;

[@bs.module "reactstrap"]
external tooltip : ReasonReact.reactClass = "Tooltip";

type placement;
type target;
type container;
type toggle;
type delay;
type modifiers;

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
  cssModule,
  [@bs.optional]
  toggle,
  [@bs.optional]
  autohide: bool,
  [@bs.optional]
  placementPrefix: string,
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
      props(
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
