[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~size: string=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Pagination";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (~ariaLabel=?, ~className=?, ~cssModule=?, ~size=?, ~tag=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~size?,
        ~tag?,
        ~children,
        (),
      ),
      children,
    );
  };
};