[@bs.module "reactstrap"] external row : ReasonReact.reactClass = "Row";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  noGutters: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~noGutters=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=row,
    ~props=props(~tag?, ~noGutters?, ~className?, ~cssModule?, ()),
    children,
  );