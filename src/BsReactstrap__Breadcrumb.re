[@bs.module "reactstrap"]
external breadcrumb: ReasonReact.reactClass = "Breadcrumb";

[@bs.obj]
external makeProps:
  (~tag: string=?, ~className: string=?, ~cssModule: 'a=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=breadcrumb,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
