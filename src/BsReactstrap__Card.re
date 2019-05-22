[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~inverse: bool=?,
    ~color: string=?,
    ~block: 'b=?,
    ~body: bool=?,
    ~outline: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
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
        ~children,
        (),
      ),
      children,
    );
  };
};
