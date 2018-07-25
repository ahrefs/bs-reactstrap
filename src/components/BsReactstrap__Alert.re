[@bs.module "reactstrap"] external alert : ReasonReact.reactClass = "Alert";

type toggle;
type transition;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  closeClassName: string,
  [@bs.optional]
  closeAriaLabel: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  color: string,
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  toggle,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  transition,
};

let make =
    (
      ~className=?,
      ~closeClassName=?,
      ~closeAriaLabel=?,
      ~cssModule=?,
      ~color=?,
      ~isOpen=?,
      ~toggle=?,
      ~tag=?,
      ~transition=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=alert,
    ~props=
      props(
        ~className?,
        ~closeClassName?,
        ~closeAriaLabel?,
        ~cssModule?,
        ~color?,
        ~isOpen?,
        ~toggle?,
        ~tag?,
        ~transition?,
        (),
      ),
    children,
  );