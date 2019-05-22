[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~disabled: bool=?,
    ~divider: bool=?,
    ~tag: 'a=?,
    ~header: bool=?,
    ~onClick: 'b=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~toggle: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownItem";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~active=?,
        ~disabled=?,
        ~divider=?,
        ~tag=?,
        ~header=?,
        ~onClick=?,
        ~className=?,
        ~cssModule=?,
        ~toggle=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~active?,
        ~disabled?,
        ~divider?,
        ~tag?,
        ~header?,
        ~onClick?,
        ~className?,
        ~cssModule?,
        ~toggle?,
        ~children,
        (),
      ),
      children,
    );
  };
};
