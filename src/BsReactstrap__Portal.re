[@bs.module "reactstrap"] [@react.component]
external make: (~node: 'a=?, ~children: React.element=?, unit) => React.element =
  "Portal";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~node=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~node?, ~children, ()),
      children,
    );
  };
};
