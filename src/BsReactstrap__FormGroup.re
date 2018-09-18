[@bs.module "reactstrap"]
external formGroup: ReasonReact.reactClass = "FormGroup";

[@bs.obj]
external makeProps:
  (
    ~row: bool=?,
    ~check: bool=?,
    ~inline: bool=?,
    ~disabled: bool=?,
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    unit
  ) =>
  _ =
  "";

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
      makeProps(
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
