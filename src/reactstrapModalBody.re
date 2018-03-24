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
      "tag": Js.Nullable.from_opt(tag),
      "className": Js.Nullable.from_opt(className),
      "cssModule": Js.Nullable.from_opt(cssModule)
    },
    children
  );
