[@bs.module "reactstrap"] [@react.component]
external make:
  (~addonType: 'a, ~children: React.element=?, unit) => React.element =
  "InputGroupButtonDropdown";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~addonType, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~addonType, ~children, ()),
      children,
    );
  };
};
