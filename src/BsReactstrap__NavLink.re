open BsReactstrap__Props;

[@bs.module "reactstrap"]
external navLink : ReasonReact.reactClass = "NavLink";

type onClick;
type href;
type innerRef;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  onClick,
  [@bs.optional]
  href,
};

let make =
    (
      ~tag=?,
      ~innerRef=?,
      ~disabled=?,
      ~active=?,
      ~className=?,
      ~cssModule=?,
      ~onClick=?,
      ~href=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navLink,
    ~props=
      props(
        ~tag?,
        ~innerRef?,
        ~disabled?,
        ~active?,
        ~className?,
        ~cssModule?,
        ~onClick?,
        ~href?,
        (),
      ),
    children,
  );
