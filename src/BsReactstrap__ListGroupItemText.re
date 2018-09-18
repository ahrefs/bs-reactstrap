[@bs.module "reactstrap"]
external listGroupItemText: ReasonReact.reactClass = "ListGroupItemText";

[@bs.obj]
external makeProps: (~tag: 'a=?, ~className: 'b=?, ~cssModule: 'c=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listGroupItemText,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
