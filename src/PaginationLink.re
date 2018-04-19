[@bs.module "reactstrap"] external paginationLink : ReasonReact.reactClass = "PaginationLink";

[@bs.obj]
external makeProps : (
  ~aria-label: string=?,
  ~children: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~next: bool=?,
  ~previous: bool=?,
  ~tag: 'c=?,
  unit
) => _ = "";

let make = (
  ~aria-label=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  ~next=?,
  ~previous=?,
  ~tag=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationLink,
    ~props=makeProps(
      ~aria-label?,
      ~children?,
      ~className?,
      ~cssModule?,
      ~next?,
      ~previous?,
      ~tag?,
      ()
    ),
    children
  );
