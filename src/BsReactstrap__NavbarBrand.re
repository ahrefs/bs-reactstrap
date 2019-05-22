[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~href: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "NavbarBrand";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~className=?, ~cssModule=?, ~href=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~className?, ~cssModule?, ~href?, ~children, ()),
      children,
    );
  };
};
