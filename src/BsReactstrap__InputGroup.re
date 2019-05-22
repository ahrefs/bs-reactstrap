[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "InputGroup";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~size=?, ~className=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~size?, ~className?, ~cssModule?, ~children, ()),
      children,
    );
  };
};
