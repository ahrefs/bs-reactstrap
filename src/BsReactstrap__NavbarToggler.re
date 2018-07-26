open BsReactstrap__Props;

[@bs.module "reactstrap"]
external navbarToggler : ReasonReact.reactClass = "NavbarToggler";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional] [@bs.as "type"]
  type_: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~type_=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbarToggler,
    ~props=props(~tag?, ~type_?, ~className?, ~cssModule?, ()),
    children,
  );
