[@bs.module "reactstrap"] external pagination : ReasonReact.reactClass = "Pagination";

[@bs.obj]
external makeProps : (
  ~className: string=?,
  ~cssModule: 'a=?,
  ~size: string=?,
  ~tag: 'b=?,
  unit
) => _ = "";

let make = (
  ~className=?,
  ~cssModule=?,
  ~size=?,
  ~tag=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=pagination,
    ~props=makeProps(
      ~className?,
      ~cssModule?,
      ~size?,
      ~tag?,
      ()
    ),
    children
  );
