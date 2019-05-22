[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~activeTab: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "TabContent";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~activeTab=?, ~className=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~activeTab?, ~className?, ~cssModule?, ~children, ()),
      children,
    );
  };
};
