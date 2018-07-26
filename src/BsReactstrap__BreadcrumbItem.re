open BsReactstrap__Props;

[@bs.module "reactstrap"]
external breadcrumbItem : ReasonReact.reactClass = "BreadcrumbItem";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make = (~tag=?, ~active=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=breadcrumbItem,
    ~props=props(~tag?, ~active?, ~className?, ~cssModule?, ()),
    children,
  );
