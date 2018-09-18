[@bs.module "reactstrap"]
external paginationItem: ReasonReact.reactClass = "PaginationItem";

[@bs.obj]
external makeProps:
  (
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~tag: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~active=?, ~className=?, ~cssModule=?, ~disabled=?, ~tag=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=paginationItem,
    ~props=
      makeProps(~active?, ~className?, ~cssModule?, ~disabled?, ~tag?, ()),
    children,
  );
