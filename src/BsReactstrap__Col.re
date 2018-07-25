open BsReactstrap__Props;

[@bs.module "reactstrap"] external col : ReasonReact.reactClass = "Col";

type xs;
type sm;
type md;
type lg;
type xl;
type widths;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  xs,
  [@bs.optional]
  sm,
  [@bs.optional]
  md,
  [@bs.optional]
  lg,
  [@bs.optional]
  xl,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  widths,
};

let make =
    (
      ~tag=?,
      ~xs=?,
      ~sm=?,
      ~md=?,
      ~lg=?,
      ~xl=?,
      ~className=?,
      ~cssModule=?,
      ~widths=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=col,
    ~props=
      props(
        ~tag?,
        ~xs?,
        ~sm?,
        ~md?,
        ~lg?,
        ~xl?,
        ~className?,
        ~cssModule?,
        ~widths?,
        (),
      ),
    children,
  );
