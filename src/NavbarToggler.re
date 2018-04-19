[@bs.module "reactstrap"] external navbarToggler : ReasonReact.reactClass = "NavbarToggler";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~type_: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~type_=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbarToggler,
    ~props=makeProps(
      ~tag?,
      ~type_?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
