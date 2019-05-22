[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~isOpen: bool=?,
    ~tag: 'a=?,
    ~className: 'b=?,
    ~navbar: bool=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Collapse";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (~isOpen=?, ~tag=?, ~className=?, ~navbar=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~isOpen?,
        ~tag?,
        ~className?,
        ~navbar?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
