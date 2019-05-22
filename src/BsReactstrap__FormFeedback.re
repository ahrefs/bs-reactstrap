[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~valid: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "FormFeedback";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~tag=?, ~className=?, ~cssModule=?, ~valid=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~tag?, ~className?, ~cssModule?, ~valid?, ~children, ()),
      children,
    );
  };
};
