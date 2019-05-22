[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tabs: bool=?,
    ~pills: bool=?,
    ~vertical: 'a=?,
    ~horizontal: string=?,
    ~justified: bool=?,
    ~fill: bool=?,
    ~navbar: bool=?,
    ~card: bool=?,
    ~tag: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Nav";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tabs=?,
        ~pills=?,
        ~vertical=?,
        ~horizontal=?,
        ~justified=?,
        ~fill=?,
        ~navbar=?,
        ~card=?,
        ~tag=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tabs?,
        ~pills?,
        ~vertical?,
        ~horizontal?,
        ~justified?,
        ~fill?,
        ~navbar?,
        ~card?,
        ~tag?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
