[@bs.module "reactstrap"] external form : ReasonReact.reactClass = "Form";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~inline: bool=?,
  ~tag: 'b=?,
  ~innerRef: 'c=?,
  ~className: string=?,
  ~cssModule: 'd=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~inline=?,
  ~tag=?,
  ~innerRef=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=form,
    ~props=makeProps(
      ~children?,
      ~inline?,
      ~tag?,
      ~innerRef?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
