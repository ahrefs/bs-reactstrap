[@bs.module "reactstrap"] external modalFooter : ReasonReact.reactClass = "ModalFooter";

let make = (
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalFooter,
    ~props={
      "tag": Js.Nullable.from_opt(tag),
      "className": Js.Nullable.from_opt(className),
      "cssModule": Js.Nullable.from_opt(cssModule)
    },
    children
  );
