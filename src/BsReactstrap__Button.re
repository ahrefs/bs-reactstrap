[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~block: bool=?,
    ~color: string=?,
    ~disabled: bool=?,
    ~outline: bool=?,
    ~tag: 'a=?,
    ~id: string=?,
    ~innerRef: 'b=?,
    ~onClick: 'c=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Button";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~active=?,
        ~block=?,
        ~color=?,
        ~disabled=?,
        ~outline=?,
        ~tag=?,
        ~id=?,
        ~innerRef=?,
        ~onClick=?,
        ~size=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~active?,
        ~block?,
        ~color?,
        ~disabled?,
        ~outline?,
        ~tag?,
        ~id?,
        ~innerRef?,
        ~onClick?,
        ~size?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
