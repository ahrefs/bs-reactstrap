[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~disabled: bool=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~onClick: 'd=?,
    ~href: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavLink";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~innerRef=?,
        ~disabled=?,
        ~active=?,
        ~className=?,
        ~cssModule=?,
        ~onClick=?,
        ~href=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~innerRef?,
        ~disabled?,
        ~active?,
        ~className?,
        ~cssModule?,
        ~onClick?,
        ~href?,
        ~children,
        (),
      ),
      children,
    );
  };
};
