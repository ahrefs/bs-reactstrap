[@bs.module "reactstrap"] external formGroup : ReasonReact.reactClass = "FormGroup";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~row: bool=?,
  ~check: bool=?,
  ~inline: bool=?,
  ~disabled: bool=?,
  ~tag: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~row=?,
  ~check=?,
  ~inline=?,
  ~disabled=?,
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formGroup,
    ~props=makeProps(
      ~children?,
      ~row?,
      ~check?,
      ~inline?,
      ~disabled?,
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
