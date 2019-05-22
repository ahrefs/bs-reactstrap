[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~light: bool=?,
    ~dark: bool=?,
    ~inverse: 'a=?,
    ~full: bool=?,
    ~fixed: string=?,
    ~sticky: string=?,
    ~color: string=?,
    ~role: string=?,
    ~tag: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~toggleable: 'd=?,
    ~expand: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Navbar";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~light=?,
        ~dark=?,
        ~inverse=?,
        ~full=?,
        ~fixed=?,
        ~sticky=?,
        ~color=?,
        ~role=?,
        ~tag=?,
        ~className=?,
        ~cssModule=?,
        ~toggleable=?,
        ~expand=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~light?,
        ~dark?,
        ~inverse?,
        ~full?,
        ~fixed?,
        ~sticky?,
        ~color?,
        ~role?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~toggleable?,
        ~expand?,
        ~children,
        (),
      ),
      children,
    );
  };
};
