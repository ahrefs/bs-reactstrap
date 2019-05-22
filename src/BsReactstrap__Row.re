[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~noGutters: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Row";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~noGutters=?, ~className=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~noGutters?, ~className?, ~cssModule?, ~children, ()),
      children,
    );
  };
};
