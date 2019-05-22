[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavItem";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~active=?, ~className=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~active?, ~className?, ~cssModule?, ~children, ()),
      children,
    );
  };
};
