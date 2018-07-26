open BsReactstrap__Props;

[@bs.module "reactstrap"]
external navItem : ReasonReact.reactClass = "NavItem";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~active=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navItem,
    ~props=props(~tag?, ~active?, ~className?, ~cssModule?, ()),
    children,
  );
