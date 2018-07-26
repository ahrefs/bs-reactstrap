open BsReactstrap__Props;

[@bs.module "reactstrap"] external form : ReasonReact.reactClass = "Form";

type innerRef;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  inline: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (~inline=?, ~tag=?, ~innerRef=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=form,
    ~props=props(~inline?, ~tag?, ~innerRef?, ~className?, ~cssModule?, ()),
    children,
  );
