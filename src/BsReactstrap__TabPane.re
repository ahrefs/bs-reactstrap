open BsReactstrap__Props;

[@bs.module "reactstrap"]
external tabPane : ReasonReact.reactClass = "TabPane";

type tabId;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  tabId,
};

let make = (~tag=?, ~className=?, ~cssModule=?, ~tabId=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tabPane,
    ~props=props(~tag?, ~className?, ~cssModule?, ~tabId?, ()),
    children,
  );
