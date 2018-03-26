[@bs.module "reactstrap"] external modalHeader : ReasonReact.reactClass = "ModalHeader";

let make = (
  ~tag=?,
  ~wrapTag=?,
  ~toggle=?,
  ~className=?,
  ~cssModule=?,
  ~closeAriaLabel=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalHeader,
    ~props={
      "tag": Js.Nullable.fromOption(tag),
      "wrapTag": Js.Nullable.fromOption(wrapTag),
      "toggle": Js.Nullable.fromOption(toggle),
      "className": Js.Nullable.fromOption(className),
      "cssModule": Js.Nullable.fromOption(cssModule),
      "closeAriaLabel": Js.Nullable.fromOption(closeAriaLabel)
    },
    children
  );
