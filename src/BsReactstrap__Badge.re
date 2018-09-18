[@bs.module "reactstrap"] external badge: ReasonReact.reactClass = "Badge";

[@bs.obj]
external makeProps:
  (
    ~color: string=?,
    ~pill: bool=?,
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make = (~color=?, ~pill=?, ~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=badge,
    ~props=makeProps(~color?, ~pill?, ~tag?, ~className?, ~cssModule?, ()),
    children,
  );
