[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~inline: bool=?,
    ~onSubmit: ReactEvent.Form.t => unit=?,
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Form";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~inline=?,
        ~onSubmit=?,
        ~tag=?,
        ~innerRef=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~inline?,
        ~onSubmit?,
        ~tag?,
        ~innerRef?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
