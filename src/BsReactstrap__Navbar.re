[@bs.module "reactstrap"] external navbar : ReasonReact.reactClass = "Navbar";

type inverse;
type toggleable;
type expand;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  light: bool,
  [@bs.optional]
  dark: bool,
  [@bs.optional]
  inverse,
  [@bs.optional]
  full: bool,
  [@bs.optional]
  fixed: string,
  [@bs.optional]
  sticky: string,
  [@bs.optional]
  color: string,
  [@bs.optional]
  role: string,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  toggleable,
  [@bs.optional]
  expand,
};

let make =
    (
      ~light=?,
      ~dark=?,
      ~inverse=?,
      ~full=?,
      ~fixed=?,
      ~sticky=?,
      ~color=?,
      ~role=?,
      ~tag=?,
      ~className=?,
      ~cssModule=?,
      ~toggleable=?,
      ~expand=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbar,
    ~props=
      props(
        ~light?,
        ~dark?,
        ~inverse?,
        ~full?,
        ~fixed?,
        ~sticky?,
        ~color?,
        ~role?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~toggleable?,
        ~expand?,
        (),
      ),
    children,
  );