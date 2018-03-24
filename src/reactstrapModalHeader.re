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
      "tag": Js.Nullable.from_opt(tag),
      "wrapTag": Js.Nullable.from_opt(wrapTag),
      "toggle": Js.Nullable.from_opt(toggle),
      "className": Js.Nullable.from_opt(className),
      "cssModule": Js.Nullable.from_opt(cssModule),
      "closeAriaLabel": Js.Nullable.from_opt(closeAriaLabel)
    },
    children
  );
