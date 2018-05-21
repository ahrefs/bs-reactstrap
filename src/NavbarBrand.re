[@bs.module "reactstrap"] external navbarBrand : ReasonReact.reactClass = "NavbarBrand";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~href: string=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~href=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbarBrand,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ~href?,
      ()
    ),
    children
  );
