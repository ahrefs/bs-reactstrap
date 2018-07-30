[@bs.module "reactstrap"] external buttonToolbar : ReasonReact.reactClass = "ButtonToolbar";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~ariaLabel: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~role: string=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~ariaLabel=?,
  ~className=?,
  ~cssModule=?,
  ~role=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonToolbar,
    ~props=makeProps(
      ~tag?,
      ~ariaLabel?,
      ~className?,
      ~cssModule?,
      ~role?,
      ()
    ),
    children
  );
