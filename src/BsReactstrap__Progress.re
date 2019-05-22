[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~bar: bool=?,
    ~multi: bool=?,
    ~tag: string=?,
    ~value: 'a=?,
    ~max: 'b=?,
    ~animated: bool=?,
    ~striped: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~barClassName: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Progress";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~bar=?,
        ~multi=?,
        ~tag=?,
        ~value=?,
        ~max=?,
        ~animated=?,
        ~striped=?,
        ~color=?,
        ~className=?,
        ~barClassName=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~bar?,
        ~multi?,
        ~tag?,
        ~value?,
        ~max?,
        ~animated?,
        ~striped?,
        ~color?,
        ~className?,
        ~barClassName?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
