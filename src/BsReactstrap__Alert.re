open BsReactstrap__Props;

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
  cssModule,
  [@bs.optional]
  color: string,
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  toggle,
  [@bs.optional]
  tag,
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
