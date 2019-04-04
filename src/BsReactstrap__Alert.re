[@bs.module "reactstrap"] external alert: ReasonReact.reactClass = "Alert";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~closeClassName: string=?,
    ~closeAriaLabel: string=?,
    ~cssModule: 'a=?,
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `succeess
              | `danger
              | `warning
              | `info
              | `light
              | `dark
            ]
              =?,
    ~fade: bool=?,
    ~isOpen: bool=?,
    ~toggle: 'b=?,
    ~tag: 'c=?,
    ~transition: 'd=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~closeAriaLabel=?,
      ~closeClassName=?,
      ~color=?,
      ~cssModule=?,
      ~fade=?,
      ~isOpen=?,
      ~tag=?,
      ~toggle=?,
      ~transition=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=alert,
    ~props=
      makeProps(
        ~className?,
        ~closeAriaLabel?,
        ~closeClassName?,
        ~color?,
        ~cssModule?,
        ~fade?,
        ~isOpen?,
        ~tag?,
        ~toggle?,
        ~transition?,
        (),
      ),
    children,
  );