[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~row: bool=?,
    ~check: bool=?,
    ~inline: bool=?,
    ~disabled: bool=?,
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "FormGroup";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

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
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~row?,
        ~check?,
        ~inline?,
        ~disabled?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
