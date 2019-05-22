[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~closeClassName: string=?,
    ~closeAriaLabel: string=?,
    ~cssModule: 'a=?,
    ~color: string=?,
    ~isOpen: bool=?,
    ~toggle: 'b=?,
    ~tag: 'c=?,
    ~transition: 'd=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Alert";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~className=?,
        ~closeClassName=?,
        ~closeAriaLabel=?,
        ~cssModule=?,
        ~color=?,
        ~isOpen=?,
        ~toggle=?,
        ~tag=?,
        ~transition=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~className?,
        ~closeClassName?,
        ~closeAriaLabel?,
        ~cssModule?,
        ~color?,
        ~isOpen?,
        ~toggle?,
        ~tag?,
        ~transition?,
        ~children,
        (),
      ),
      children,
    );
  };
};
