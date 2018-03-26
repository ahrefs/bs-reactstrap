[@bs.module "reactstrap"] external modalFooter : ReasonReact.reactClass = "ModalFooter";

let make = (
  ~tag=?,
  ~className: option(string)=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalFooter,
    ~props={
      "tag": Js.Nullable.fromOption(tag),
      "className": Js.Nullable.fromOption(className),
      "cssModule": Js.Nullable.fromOption(cssModule)
    },
    children
  );
