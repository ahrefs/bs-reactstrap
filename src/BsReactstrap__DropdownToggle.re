open BsReactstrap__Props;

[@bs.module "reactstrap"]
external dropdownToggle : ReasonReact.reactClass = "DropdownToggle";

type onClick;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  caret: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  onClick,
  [@bs.optional]
  ariaHaspopup: bool,
  [@bs.optional]
  split: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  nav: bool,
};

let make =
    (
      ~caret=?,
      ~color=?,
      ~className=?,
      ~cssModule=?,
      ~disabled=?,
      ~onClick=?,
      ~ariaHaspopup=?,
      ~split=?,
      ~tag=?,
      ~nav=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownToggle,
    ~props=
      props(
        ~caret?,
        ~color?,
        ~className?,
        ~cssModule?,
        ~disabled?,
        ~onClick?,
        ~ariaHaspopup?,
        ~split?,
        ~tag?,
        ~nav?,
        (),
      ),
    children,
  );
