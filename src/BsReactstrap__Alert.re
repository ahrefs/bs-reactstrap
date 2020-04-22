[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~className: string=?,
    ~closeClassName: string=?,
    ~closeAriaLabel: string=?,
    ~cssModule: 'a=?,
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `success
              | `info
              | `warning
              | `danger
              | `link
            ]
              =?,
    ~isOpen: bool=?,
    ~toggle: 'b=?,
    ~tag: 'c=?,
    ~transition: 'd=?,
    ~fade: bool=?,
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
        ~fade=?,
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
        ~fade?,
        ~children,
        (),
      ),
      children,
    );
  };
};