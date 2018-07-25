[@bs.module "reactstrap"]
external inputGroupButton : ReasonReact.reactClass = "InputGroupButton";

type addonType;
type groupAttributes;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  addonType,
  [@bs.optional]
  groupClassName: string,
  [@bs.optional]
  groupAttributes,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make =
    (
      ~tag=?,
      ~addonType,
      ~groupClassName=?,
      ~groupAttributes=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButton,
    ~props=
      props(
        ~tag?,
        ~addonType,
        ~groupClassName?,
        ~groupAttributes?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );