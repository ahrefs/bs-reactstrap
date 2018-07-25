[@bs.module "reactstrap"]
external cardLink : ReasonReact.reactClass = "CardLink";

type innerRef;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~innerRef=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardLink,
    ~props=props(~tag?, ~innerRef?, ~className?, ~cssModule?, ()),
    children,
  );