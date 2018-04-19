[@bs.module "reactstrap"] external pagination : ReasonReact.reactClass = "Pagination";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~size: string=?,
  ~tag: 'c=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~className=?,
  ~cssModule=?,
  ~size=?,
  ~tag=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=pagination,
    ~props=makeProps(
      ~children?,
      ~className?,
      ~cssModule?,
      ~size?,
      ~tag?,
      ()
    ),
    children
  );
