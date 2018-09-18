[@bs.module "reactstrap"]
external formText: ReasonReact.reactClass = "FormText";

[@bs.obj]
external makeProps:
  (
    ~inline: bool=?,
    ~tag: 'a=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make = (~inline=?, ~tag=?, ~color=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formText,
    ~props=makeProps(~inline?, ~tag?, ~color?, ~className?, ~cssModule?, ()),
    children,
  );
