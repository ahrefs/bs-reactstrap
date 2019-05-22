[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~role: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonToolbar";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (~tag=?, ~ariaLabel=?, ~className=?, ~cssModule=?, ~role=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~role?,
        ~children,
        (),
      ),
      children,
    );
  };
};
