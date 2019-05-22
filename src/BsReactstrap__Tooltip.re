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
    ~cssModule: 'd=?,
    ~toggle: 'e=?,
    ~autohide: bool=?,
    ~placementPrefix: string=?,
    ~delay: 'f=?,
    ~modifiers: 'g=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Tooltip";

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
        ~cssModule=?,
        ~toggle=?,
        ~autohide=?,
        ~placementPrefix=?,
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
        ~cssModule?,
        ~toggle?,
        ~autohide?,
        ~placementPrefix?,
        ~delay?,
        ~modifiers?,
        ~children,
        (),
      ),
      children,
    );
  };
};
