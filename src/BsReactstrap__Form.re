[@bs.module "reactstrap"] external form: ReasonReact.reactClass = "Form";

[@bs.obj]
external makeProps:
  (
    ~inline: bool=?,
    ~onSubmit: 'a => unit=?,
    ~tag: 'b=?,
    ~innerRef: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
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