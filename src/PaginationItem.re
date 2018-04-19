[@bs.module "reactstrap"] external paginationItem : ReasonReact.reactClass = "PaginationItem";

[@bs.obj]
external makeProps : (
  ~active: bool=?,
  ~children: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~disabled: bool=?,
  ~tag: 'c=?,
  unit
) => _ = "";

let make = (
  ~active=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  ~disabled=?,
  ~tag=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationItem,
    ~props=makeProps(
      ~active?,
      ~children?,
      ~className?,
      ~cssModule?,
      ~disabled?,
      ~tag?,
      ()
    ),
    children
  );
