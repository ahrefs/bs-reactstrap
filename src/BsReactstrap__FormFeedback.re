open BsReactstrap__Props;

[@bs.module "reactstrap"]
external formFeedback : ReasonReact.reactClass = "FormFeedback";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  valid: bool,
};

let make = (~tag=?, ~className=?, ~cssModule=?, ~valid=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formFeedback,
    ~props=props(~tag?, ~className?, ~cssModule?, ~valid?, ()),
    children,
  );
