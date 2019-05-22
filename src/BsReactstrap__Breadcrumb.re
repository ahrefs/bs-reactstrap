[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~listTag:'b=?,
    ~className: string=?,
    ~listClassName: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Breadcrumb";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~listTag=?,
        ~className=?,
        ~listClassName=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~listTag?,
        ~className?,
        ~listClassName?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
