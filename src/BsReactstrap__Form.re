[@bs.module "reactstrap"] external form: ReasonReact.reactClass = "Form";

[@bs.obj]
external makeProps:
  (
    ~inline: bool=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~inline=?,
      ~onSubmit=?,
      ~tag=?,
      ~innerRef=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=form,
    ~props=
      makeProps(
        ~inline?,
        ~onSubmit?,
        ~tag?,
        ~innerRef?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );