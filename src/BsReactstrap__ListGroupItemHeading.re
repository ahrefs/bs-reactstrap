[@bs.module "reactstrap"]
external listGroupItemHeading: ReasonReact.reactClass = "ListGroupItemHeading";

[@bs.obj]
external makeProps: (~tag: 'a=?, ~className: 'b=?, ~cssModule: 'c=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listGroupItemHeading,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
