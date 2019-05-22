[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~disabled: bool=?,
    ~dropup: 'a=?,
    ~direction: 'b=?,
    ~group: bool=?,
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
  "Dropdown";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~disabled=?,
        ~dropup=?,
        ~direction=?,
        ~group=?,
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
        ~group?,
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
