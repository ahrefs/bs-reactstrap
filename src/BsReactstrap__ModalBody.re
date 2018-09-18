[@bs.module "reactstrap"]
external modalBody: ReasonReact.reactClass = "ModalBody";

[@bs.obj]
external makeProps:
  (~tag: 'a=?, ~className: string=?, ~cssModule: 'b=?, unit) => _ =
  "";

let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalBody,
    ~props=makeProps(~tag?, ~className?, ~cssModule?, ()),
    children,
  );
