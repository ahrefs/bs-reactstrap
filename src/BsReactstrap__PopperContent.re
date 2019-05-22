[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~placement: string=?,
    ~placementPrefix: string=?,
    ~hideArrow: bool=?,
    ~tag: string=?,
    ~isOpen: bool,
    ~cssModule: 'a=?,
    ~offset: 'b=?,
    ~fallbackPlacement: 'c=?,
    ~flip: bool=?,
    ~container: 'd=?,
    ~target: 'e,
    ~modifiers: 'f=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PopperContent";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~placement=?,
        ~placementPrefix=?,
        ~hideArrow=?,
        ~tag=?,
        ~isOpen,
        ~cssModule=?,
        ~offset=?,
        ~fallbackPlacement=?,
        ~flip=?,
        ~container=?,
        ~target,
        ~modifiers=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~placement?,
        ~placementPrefix?,
        ~hideArrow?,
        ~tag?,
        ~isOpen,
        ~cssModule?,
        ~offset?,
        ~fallbackPlacement?,
        ~flip?,
        ~container?,
        ~target,
        ~modifiers?,
        ~children,
        (),
      ),
      children,
    );
  };
};
