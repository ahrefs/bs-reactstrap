open BsReactstrap__Props;

[@bs.module "reactstrap"]
external cardImg : ReasonReact.reactClass = "CardImg";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  top: bool,
  [@bs.optional]
  bottom: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~top=?, ~bottom=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardImg,
    ~props=props(~tag?, ~top?, ~bottom?, ~className?, ~cssModule?, ()),
    children,
  );
