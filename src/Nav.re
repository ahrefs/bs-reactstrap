[@bs.module "reactstrap"] external nav : ReasonReact.reactClass = "Nav";

[@bs.obj]
external makeProps : (
  ~tabs: bool=?,
  ~pills: bool=?,
  ~vertical: 'a=?,
  ~horizontal: string=?,
  ~justified: bool=?,
  ~fill: bool=?,
  ~navbar: bool=?,
  ~card: bool=?,
  ~tag: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~tabs=?,
  ~pills=?,
  ~vertical=?,
  ~horizontal=?,
  ~justified=?,
  ~fill=?,
  ~navbar=?,
  ~card=?,
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=nav,
    ~props=makeProps(
      ~tabs?,
      ~pills?,
      ~vertical?,
      ~horizontal?,
      ~justified?,
      ~fill?,
      ~navbar?,
      ~card?,
      ~tag?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
