[@bs.module "reactstrap"] external alert : ReasonReact.reactClass = "Alert";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~className: string=?,
  ~closeClassName: string=?,
  ~closeAriaLabel: string=?,
  ~cssModule: 'b=?,
  ~color: string=?,
  ~isOpen: bool=?,
  ~toggle: 'c=?,
  ~tag: 'd=?,
  ~transition: 'e=?,
  unit
) => _ = "";

let make = (
  ~children=?,
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
      ~children?,
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
