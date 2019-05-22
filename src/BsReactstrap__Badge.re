[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~color: string=?,
    ~pill: bool=?,
    ~tag: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Badge";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make = (~color=?, ~pill=?, ~tag=?, ~className=?, ~cssModule=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~color?,
        ~pill?,
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
