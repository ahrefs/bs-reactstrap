[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~inverse: bool=?,
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
    ~block: 'b=?,
    ~body: bool=?,
    ~outline: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~innerRef: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Card";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~inverse=?,
        ~color=?,
        ~block=?,
        ~body=?,
        ~outline=?,
        ~className=?,
        ~cssModule=?,
        ~innerRef=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~inverse?,
        ~color?,
        ~block?,
        ~body?,
        ~outline?,
        ~className?,
        ~cssModule?,
        ~innerRef?,
        ~children,
        (),
      ),
      children,
    );
  };
};