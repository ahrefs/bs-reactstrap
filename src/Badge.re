[@bs.module "reactstrap"] external badge : ReasonReact.reactClass = "Badge";

[@bs.obj]
external makeProps : (
  ~color: string=?,
  ~pill: bool=?,
  ~tag: 'a=?,
  ~children: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~color=?,
  ~pill=?,
  ~tag=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=badge,
    ~props=makeProps(
      ~color?,
      ~pill?,
      ~tag?,
      ~children?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
