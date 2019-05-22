[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~hidden: bool=?,
    ~check: bool=?,
    ~size: string=?,
    ~for_: string=?,
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~xs: 'b=?,
    ~sm: 'c=?,
    ~md: 'd=?,
    ~lg: 'e=?,
    ~xl: 'f=?,
    ~widths: 'g=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Label";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~hidden=?,
        ~check=?,
        ~size=?,
        ~for_=?,
        ~tag=?,
        ~className=?,
        ~cssModule=?,
        ~xs=?,
        ~sm=?,
        ~md=?,
        ~lg=?,
        ~xl=?,
        ~widths=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~hidden?,
        ~check?,
        ~size?,
        ~for_?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~xs?,
        ~sm?,
        ~md?,
        ~lg?,
        ~xl?,
        ~widths?,
        ~children,
        (),
      ),
      children,
    );
  };
};
