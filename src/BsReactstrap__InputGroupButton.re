[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~addonType: 'b,
    ~groupClassName: string=?,
    ~groupAttributes: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "InputGroupButton";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~addonType,
        ~groupClassName=?,
        ~groupAttributes=?,
        ~className=?,
        ~cssModule=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~addonType,
        ~groupClassName?,
        ~groupAttributes?,
        ~className?,
        ~cssModule?,
        ~children,
        (),
      ),
      children,
    );
  };
};
