[@bs.module "reactstrap"] external form: ReasonReact.reactClass = "Form";

[@bs.obj]
external makeProps:
  (
    ~inline: bool=?,
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~inline=?, ~tag=?, ~innerRef=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=form,
    ~props=
      makeProps(~inline?, ~tag?, ~innerRef?, ~className?, ~cssModule?, ()),
    children,
  );
