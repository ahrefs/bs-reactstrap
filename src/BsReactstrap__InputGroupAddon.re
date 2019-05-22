[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~addonType: 'a,
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
        ~tag=?,
        ~addonType,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~addonType,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
