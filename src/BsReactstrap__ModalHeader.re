[@bs.module "reactstrap"]
external modalHeader : ReasonReact.reactClass = "ModalHeader";

type toggle;
type wrapTag;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  wrapTag,
  [@bs.optional]
  toggle,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  closeAriaLabel: string,
};

let make =
    (
      ~tag=?,
      ~wrapTag=?,
      ~toggle=?,
      ~className=?,
      ~cssModule=?,
      ~closeAriaLabel=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalHeader,
    ~props=
      props(
        ~tag?,
        ~wrapTag?,
        ~toggle?,
        ~className?,
        ~cssModule?,
        ~closeAriaLabel?,
        (),
      ),
    children,
  );