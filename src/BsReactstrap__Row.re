[@bs.module "reactstrap"] external row: ReasonReact.reactClass = "Row";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~noGutters: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~form: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~tag=?, ~noGutters=?, ~className=?, ~cssModule=?, ~form=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=row,
    ~props=
      makeProps(~tag?, ~noGutters?, ~className?, ~cssModule?, ~form?, ()),
    children,
  );
