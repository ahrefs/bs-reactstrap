open BsReactstrap__Props;

[@bs.module "reactstrap"]
external formGroup : ReasonReact.reactClass = "FormGroup";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  row: bool,
  [@bs.optional]
  check: bool,
  [@bs.optional]
  inline: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  tag: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~row=?,
      ~check=?,
      ~inline=?,
      ~disabled=?,
      ~tag=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=formGroup,
    ~props=
      props(
        ~row?,
        ~check?,
        ~inline?,
        ~disabled?,
        ~tag?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
