open BsReactstrap__Props;

[@bs.module "reactstrap"] external badge : ReasonReact.reactClass = "Badge";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  color: string,
  [@bs.optional]
  pill: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~color=?, ~pill=?, ~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=badge,
    ~props=props(~color?, ~pill?, ~tag?, ~className?, ~cssModule?, ()),
    children,
  );
