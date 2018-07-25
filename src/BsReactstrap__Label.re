[@bs.module "reactstrap"] external label : ReasonReact.reactClass = "Label";

type xs;
type sm;
type md;
type lg;
type xl;
type widths;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  hidden: bool,
  [@bs.optional]
  check: bool,
  [@bs.optional]
  size: string,
  [@bs.optional]
  for_: string,
  [@bs.optional]
  tag: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
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
  widths,
};

let make =
    (
      ~hidden=?,
      ~check=?,
      ~size=?,
      ~for_=?,
      ~tag=?,
      ~className=?,
      ~cssModule=?,
      ~xs=?,
      ~sm=?,
      ~md=?,
      ~lg=?,
      ~xl=?,
      ~widths=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=label,
    ~props=
      props(
        ~hidden?,
        ~check?,
        ~size?,
        ~for_?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~xs?,
        ~sm?,
        ~md?,
        ~lg?,
        ~xl?,
        ~widths?,
        (),
      ),
    children,
  );