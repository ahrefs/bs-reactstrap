open BsReactstrap__Props;

[@bs.module "reactstrap"]
external navbarBrand : ReasonReact.reactClass = "NavbarBrand";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  href: string,
};

let make = (~tag=?, ~className=?, ~cssModule=?, ~href=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbarBrand,
    ~props=props(~tag?, ~className?, ~cssModule?, ~href?, ()),
    children,
  );
