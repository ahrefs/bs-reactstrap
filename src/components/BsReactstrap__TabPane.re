[@bs.module "reactstrap"]
external tabPane : ReasonReact.reactClass = "TabPane";

type tabId;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  tabId,
};

let make = (~tag=?, ~className=?, ~cssModule=?, ~tabId=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tabPane,
    ~props=props(~tag?, ~className?, ~cssModule?, ~tabId?, ()),
    children,
  );