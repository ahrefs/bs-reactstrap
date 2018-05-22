[@bs.module "reactstrap"] external breadcrumbItem : ReasonReact.reactClass = "BreadcrumbItem";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~active: bool=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~active=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=breadcrumbItem,
    ~props=makeProps(
      ~tag?,
      ~active?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
