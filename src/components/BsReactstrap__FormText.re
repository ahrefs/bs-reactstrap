[@bs.module "reactstrap"]
external formText : ReasonReact.reactClass = "FormText";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  inline: bool,
  [@bs.optional]
  tag: BsReactstrap__Props.tag,
  [@bs.optional]
  color: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
};

let make = (~inline=?, ~tag=?, ~color=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formText,
    ~props=props(~inline?, ~tag?, ~color?, ~className?, ~cssModule?, ()),
    children,
  );