[@bs.module "reactstrap"] external alert : ReasonReact.reactClass = "Alert";

[@bs.obj]
external makeProps : (
  ~className: string=?,
  ~closeClassName: string=?,
  ~closeAriaLabel: string=?,
  ~cssModule: 'a=?,
  ~color: string=?,
  ~isOpen: bool=?,
  ~toggle: 'b=?,
  ~tag: 'c=?,
  ~transition: 'd=?,
  unit
) => _ = "";

let make = (
  ~className=?,
  ~closeClassName=?,
  ~closeAriaLabel=?,
  ~cssModule=?,
  ~color=?,
  ~isOpen=?,
  ~toggle=?,
  ~tag=?,
  ~transition=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=alert,
    ~props=makeProps(
      ~className?,
      ~closeClassName?,
      ~closeAriaLabel?,
      ~cssModule?,
      ~color?,
      ~isOpen?,
      ~toggle?,
      ~tag?,
      ~transition?,
      ()
    ),
    children
  );
