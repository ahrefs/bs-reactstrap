[@bs.module "reactstrap"] external formText : ReasonReact.reactClass = "FormText";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~inline: bool=?,
  ~tag: 'b=?,
  ~color: string=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~inline=?,
  ~tag=?,
  ~color=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formText,
    ~props=makeProps(
      ~children?,
      ~inline?,
      ~tag?,
      ~color?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
