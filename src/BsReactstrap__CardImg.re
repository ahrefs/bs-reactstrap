[@bs.module "reactstrap"] external cardImg: ReasonReact.reactClass = "CardImg";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~top: bool=?,
    ~bottom: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~src: string=?,
    unit
  ) =>
  _ =
  "";

let make = (~tag=?, ~top=?, ~bottom=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardImg,
    ~props=makeProps(~tag?, ~top?, ~bottom?, ~className?, ~cssModule?, ()),
    children,
  );