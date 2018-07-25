[@bs.module "reactstrap"]
external pagination : ReasonReact.reactClass = "Pagination";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  size: string,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
};

let make = (~className=?, ~cssModule=?, ~size=?, ~tag=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=pagination,
    ~props=props(~className?, ~cssModule?, ~size?, ~tag?, ()),
    children,
  );