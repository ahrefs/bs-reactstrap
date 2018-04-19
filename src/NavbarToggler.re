[@bs.module "reactstrap"] external navbarToggler : ReasonReact.reactClass = "NavbarToggler";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~type: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~children: 'c=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~type=?,
  ~className=?,
  ~cssModule=?,
  ~children=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbarToggler,
    ~props=makeProps(
      ~tag?,
      ~type?,
      ~className?,
      ~cssModule?,
      ~children?,
      ()
    ),
    children
  );
