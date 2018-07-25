open BsReactstrap__Props;

[@bs.module "reactstrap"]
external tabContent : ReasonReact.reactClass = "TabContent";

type activeTab;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  activeTab,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~activeTab=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tabContent,
    ~props=props(~tag?, ~activeTab?, ~className?, ~cssModule?, ()),
    children,
  );
