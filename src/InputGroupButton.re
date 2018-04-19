[@bs.module "reactstrap"] external inputGroupButton : ReasonReact.reactClass = "InputGroupButton";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~addonType: 'b,
  ~children: 'c=?,
  ~groupClassName: string=?,
  ~groupAttributes: 'd=?,
  ~className: string=?,
  ~cssModule: 'e=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~addonType,
  ~children=?,
  ~groupClassName=?,
  ~groupAttributes=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButton,
    ~props=makeProps(
      ~tag?,
      ~addonType,
      ~children?,
      ~groupClassName?,
      ~groupAttributes?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
