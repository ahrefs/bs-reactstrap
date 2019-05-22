[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~role: string=?,
    ~size: string=?,
    ~vertical: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonGroup";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~ariaLabel=?,
        ~className=?,
        ~cssModule=?,
        ~role=?,
        ~size=?,
        ~vertical=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~role?,
        ~size?,
        ~vertical?,
        ~children,
        (),
      ),
      children,
    );
  };
};
