[@bs.module "reactstrap"] external row: ReasonReact.reactClass = "Row";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~noGutters: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make = (~tag=?, ~noGutters=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=row,
    ~props=makeProps(~tag?, ~noGutters?, ~className?, ~cssModule?, ()),
    children,
  );
