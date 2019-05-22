[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: string=?,
    ~right: bool=?,
    ~flip: bool=?,
    ~modifiers: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "DropdownMenu";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~right=?,
        ~flip=?,
        ~modifiers=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~right?,
        ~flip?,
        ~modifiers?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
