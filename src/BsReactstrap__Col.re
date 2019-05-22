[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~xs: 'b=?,
    ~sm: 'c=?,
    ~md: 'd=?,
    ~lg: 'e=?,
    ~xl: 'f=?,
    ~className: string=?,
    ~cssModule: 'g=?,
    ~widths: 'h=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Col";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~xs=?,
        ~sm=?,
        ~md=?,
        ~lg=?,
        ~xl=?,
        ~className=?,
        ~cssModule=?,
        ~widths=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~xs?,
        ~sm?,
        ~md?,
        ~lg?,
        ~xl?,
        ~className?,
        ~cssModule?,
        ~widths?,
        ~children,
        (),
      ),
      children,
    );
  };
};
