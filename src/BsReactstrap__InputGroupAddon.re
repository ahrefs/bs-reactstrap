[@bs.module "reactstrap"]
external inputGroupAddon : ReasonReact.reactClass = "InputGroupAddon";

type addonType;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  addonType,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~tag=?, ~addonType, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupAddon,
    ~props=props(~tag?, ~addonType, ~className?, ~cssModule?, ()),
    children,
  );