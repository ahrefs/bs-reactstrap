[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~tabId: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "TabPane";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~className=?, ~cssModule=?, ~tabId=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~className?, ~cssModule?, ~tabId?, ~children, ()),
      children,
    );
  };
};
