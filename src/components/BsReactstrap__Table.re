[@bs.module "reactstrap"] external table : ReasonReact.reactClass = "Table";

type inverse;
type responsive;
type responsiveTag;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  size: string,
  [@bs.optional]
  bordered: bool,
  [@bs.optional]
  borderless: bool,
  [@bs.optional]
  striped: bool,
  [@bs.optional]
  inverse,
  [@bs.optional]
  dark: bool,
  [@bs.optional]
  hover: bool,
  [@bs.optional]
  responsive,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  responsiveTag,
};

let make =
    (
      ~className=?,
      ~cssModule=?,
      ~size=?,
      ~bordered=?,
      ~borderless=?,
      ~striped=?,
      ~inverse=?,
      ~dark=?,
      ~hover=?,
      ~responsive=?,
      ~tag=?,
      ~responsiveTag=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=table,
    ~props=
      props(
        ~className?,
        ~cssModule?,
        ~size?,
        ~bordered?,
        ~borderless?,
        ~striped?,
        ~inverse?,
        ~dark?,
        ~hover?,
        ~responsive?,
        ~tag?,
        ~responsiveTag?,
        (),
      ),
    children,
  );