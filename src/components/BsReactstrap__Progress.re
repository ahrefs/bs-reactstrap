[@bs.module "reactstrap"]
external progress : ReasonReact.reactClass = "Progress";

type value;
type max;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  bar: bool,
  [@bs.optional]
  multi: bool,
  [@bs.optional]
  tag: string,
  [@bs.optional]
  value,
  [@bs.optional]
  max,
  [@bs.optional]
  animated: bool,
  [@bs.optional]
  striped: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  barClassName: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make =
    (
      ~bar=?,
      ~multi=?,
      ~tag=?,
      ~value=?,
      ~max=?,
      ~animated=?,
      ~striped=?,
      ~color=?,
      ~className=?,
      ~barClassName=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=progress,
    ~props=
      props(
        ~bar?,
        ~multi?,
        ~tag?,
        ~value?,
        ~max?,
        ~animated?,
        ~striped?,
        ~color?,
        ~className?,
        ~barClassName?,
        ~cssModule?,
        (),
      ),
    children,
  );