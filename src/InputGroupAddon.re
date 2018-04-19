[@bs.module "reactstrap"] external inputGroupAddon : ReasonReact.reactClass = "InputGroupAddon";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~addonType: 'b,
  ~children: 'c=?,
  ~className: string=?,
  ~cssModule: 'd=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~addonType,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupAddon,
    ~props=makeProps(
      ~tag?,
      ~addonType,
      ~children?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
