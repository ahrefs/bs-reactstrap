[@bs.module "reactstrap"] external buttonGroup : ReasonReact.reactClass = "ButtonGroup";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~aria-label: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~role: string=?,
  ~size: string=?,
  ~vertical: bool=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~aria-label=?,
  ~className=?,
  ~cssModule=?,
  ~role=?,
  ~size=?,
  ~vertical=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonGroup,
    ~props=makeProps(
      ~tag?,
      ~aria-label?,
      ~className?,
      ~cssModule?,
      ~role?,
      ~size?,
      ~vertical?,
      ()
    ),
    children
  );
