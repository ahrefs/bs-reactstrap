[@bs.module "reactstrap"] external tabPane : ReasonReact.reactClass = "TabPane";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~tabId: 'c=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~tabId=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tabPane,
    ~props=makeProps(
      ~tag?,
      ~className?,
      ~cssModule?,
      ~tabId?,
      ()
    ),
    children
  );
