[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~block: bool=?,
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `success
              | `info
              | `warning
              | `danger
              | `link
            ]
              =?,
    ~disabled: bool=?,
    ~outline: bool=?,
    ~tag: 'a=?,
    ~id: string=?,
    ~innerRef: 'b=?,
    ~onClick: 'c=?,
    ~size: [@bs.string] [ | `xs | `sm | `md | `lg | `xl]=?,
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