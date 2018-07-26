open BsReactstrap__Props;

[@bs.module "reactstrap"]
external buttonToolbar : ReasonReact.reactClass = "ButtonToolbar";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  ariaLabel: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  role: string,
};

let make =
    (~tag=?, ~ariaLabel=?, ~className=?, ~cssModule=?, ~role=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonToolbar,
    ~props=props(~tag?, ~ariaLabel?, ~className?, ~cssModule?, ~role?, ()),
    children,
  );
