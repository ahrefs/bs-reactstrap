[@bs.module "reactstrap"]
external inputGroup: ReasonReact.reactClass = "InputGroup";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make = (~tag=?, ~size=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroup,
    ~props=makeProps(~tag?, ~size?, ~className?, ~cssModule?, ()),
    children,
  );
