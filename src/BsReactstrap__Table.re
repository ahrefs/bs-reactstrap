[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~bordered: bool=?,
    ~borderless: bool=?,
    ~striped: bool=?,
    ~inverse: 'b=?,
    ~dark: bool=?,
    ~hover: bool=?,
    ~responsive: 'c=?,
    ~tag: 'd=?,
    ~responsiveTag: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Table";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~cssModule=?,
        ~size=?,
        ~bordered=?,
        ~borderless=?,
        ~striped=?,
        ~inverse=?,
        ~dark=?,
        ~hover=?,
        ~responsive=?,
        ~tag=?,
        ~responsiveTag=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~cssModule?,
        ~size?,
        ~bordered?,
        ~borderless?,
        ~striped?,
        ~inverse?,
        ~dark?,
        ~hover?,
        ~responsive?,
        ~tag?,
        ~responsiveTag?,
        ~children,
        (),
      ),
      children,
    );
  };
};
