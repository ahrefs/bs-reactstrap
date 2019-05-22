[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~placement: 'a=?,
    ~target: 'b,
    ~container: 'c=?,
    ~isOpen: bool=?,
    ~disabled: bool=?,
    ~hideArrow: bool=?,
    ~className: string=?,
    ~innerClassName: string=?,
    ~placementPrefix: string=?,
    ~cssModule: 'd=?,
    ~toggle: 'e=?,
    ~delay: 'f=?,
    ~modifiers: 'g=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Popover";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~placement=?,
        ~target,
        ~container=?,
        ~isOpen=?,
        ~disabled=?,
        ~hideArrow=?,
        ~className=?,
        ~innerClassName=?,
        ~placementPrefix=?,
        ~cssModule=?,
        ~toggle=?,
        ~delay=?,
        ~modifiers=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~placement?,
        ~target,
        ~container?,
        ~isOpen?,
        ~disabled?,
        ~hideArrow?,
        ~className?,
        ~innerClassName?,
        ~placementPrefix?,
        ~cssModule?,
        ~toggle?,
        ~delay?,
        ~modifiers?,
        ~children,
        (),
      ),
      children,
    );
  };
};
