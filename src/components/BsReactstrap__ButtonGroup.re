[@bs.module "reactstrap"]
external buttonGroup : ReasonReact.reactClass = "ButtonGroup";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  ariaLabel: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  role: string,
  [@bs.optional]
  size: string,
  [@bs.optional]
  vertical: bool,
};

let make =
    (
      ~tag=?,
      ~ariaLabel=?,
      ~className=?,
      ~cssModule=?,
      ~role=?,
      ~size=?,
      ~vertical=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonGroup,
    ~props=
      props(
        ~tag?,
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~role?,
        ~size?,
        ~vertical?,
        (),
      ),
    children,
  );