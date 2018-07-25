[@bs.module "reactstrap"] external button : ReasonReact.reactClass = "Button";

type innerRef;
type onClick;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  active: bool,
  [@bs.optional]
  block: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  outline: bool,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  id: string,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  onClick,
  [@bs.optional]
  size: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make =
    (
      ~active=?,
      ~block=?,
      ~color=?,
      ~disabled=?,
      ~outline=?,
      ~tag=?,
      ~id=?,
      ~innerRef=?,
      ~onClick=?,
      ~size=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=
      props(
        ~active?,
        ~block?,
        ~color?,
        ~disabled?,
        ~outline?,
        ~tag?,
        ~id?,
        ~innerRef?,
        ~onClick?,
        ~size?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );