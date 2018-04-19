[@bs.module "reactstrap"] external buttonToolbar : ReasonReact.reactClass = "ButtonToolbar";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~aria-label: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~role: string=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~aria-label=?,
  ~className=?,
  ~cssModule=?,
  ~role=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonToolbar,
    ~props=makeProps(
      ~tag?,
      ~aria-label?,
      ~className?,
      ~cssModule?,
      ~role?,
      ()
    ),
    children
  );
