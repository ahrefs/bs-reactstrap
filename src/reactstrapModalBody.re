[@bs.module "reactstrap"] external modalBody : ReasonReact.reactClass = "ModalBody";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalBody,
    ~props={
      "tag": Js.Nullable.fromOption(tag),
      "className": Js.Nullable.fromOption(className),
      "cssModule": Js.Nullable.fromOption(cssModule)
    },
    children
  );
