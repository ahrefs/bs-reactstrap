[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~disabled: bool=?,
    ~dropup: 'a=?,
    ~direction: 'b=?,
    ~isOpen: bool=?,
    ~nav: bool=?,
    ~active: bool=?,
    ~addonType: 'c=?,
    ~size: string=?,
    ~tag: string=?,
    ~toggle: 'd=?,
    ~className: string=?,
    ~cssModule: 'e=?,
    ~inNavbar: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "ButtonDropdown";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~disabled=?,
        ~dropup=?,
        ~direction=?,
        ~isOpen=?,
        ~nav=?,
        ~active=?,
        ~addonType=?,
        ~size=?,
        ~tag=?,
        ~toggle=?,
        ~className=?,
        ~cssModule=?,
        ~inNavbar=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~disabled?,
        ~dropup?,
        ~direction?,
        ~isOpen?,
        ~nav?,
        ~active?,
        ~addonType?,
        ~size?,
        ~tag?,
        ~toggle?,
        ~className?,
        ~cssModule?,
        ~inNavbar?,
        ~children,
        (),
      ),
      children,
    );
  };
};
