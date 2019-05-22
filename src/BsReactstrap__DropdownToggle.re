[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~caret: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~onClick: 'b=?,
    ~ariaHaspopup: bool=?,
    ~split: bool=?,
    ~tag: 'c=?,
    ~nav: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownToggle";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~caret=?,
        ~color=?,
        ~className=?,
        ~cssModule=?,
        ~disabled=?,
        ~onClick=?,
        ~ariaHaspopup=?,
        ~split=?,
        ~tag=?,
        ~nav=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~caret?,
        ~color?,
        ~className?,
        ~cssModule?,
        ~disabled?,
        ~onClick?,
        ~ariaHaspopup?,
        ~split?,
        ~tag?,
        ~nav?,
        ~children,
        (),
      ),
      children,
    );
  };
};
