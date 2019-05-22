[@bs.module "reactstrap"] [@react.component]
external make:
  (
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

  let make = (~className=?, ~cssModule=?, ~size=?, ~tag=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~className?, ~cssModule?, ~size?, ~tag?, ~children, ()),
      children,
    );
  };
};
