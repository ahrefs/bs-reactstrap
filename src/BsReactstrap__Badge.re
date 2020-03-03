[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `succeess
              | `danger
              | `warning
              | `info
              | `light
              | `dark
            ]
              =?,
    ~pill: bool=?,
    ~tag: 'a=?,
    ~href: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Badge";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~color=?,
        ~pill=?,
        ~tag=?,
        ~href=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~color?,
        ~pill?,
        ~tag?,
        ~href?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};