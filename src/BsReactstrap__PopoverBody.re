[@bs.module "reactstrap"]
external popoverBody: ReasonReact.reactClass = "PopoverBody";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=popoverBody,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
