[@bs.module "reactstrap"]
external cardBody: ReasonReact.reactClass = "CardBody";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~innerRef: 'c=?,
    unit
  ) =>
  _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, ~innerRef=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=cardBody,
    ~props=makeProps(~tag?, ~className?, ~innerRef?, ~cssModule?, ()),
    children,
  );
