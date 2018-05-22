[@bs.module "reactstrap"] external tabContent : ReasonReact.reactClass = "TabContent";

[@bs.obj]
external makeProps : (
  ~tag: 'a=?,
  ~activeTab: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~tag=?,
  ~activeTab=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=tabContent,
    ~props=makeProps(
      ~tag?,
      ~activeTab?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
