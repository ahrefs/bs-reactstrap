[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~baseClass: string=?,
    ~baseClassActive: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Fade";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~baseClass=?,
        ~baseClassActive=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~baseClass?,
        ~baseClassActive?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
