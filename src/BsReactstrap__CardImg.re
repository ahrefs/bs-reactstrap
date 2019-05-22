[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~tag: 'a=?,
    ~top: bool=?,
    ~bottom: bool=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~src: string=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "CardImg";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~tag=?,
        ~top=?,
        ~bottom=?,
        ~className=?,
        ~cssModule=?,
        ~src=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~tag?,
        ~top?,
        ~bottom?,
        ~className?,
        ~cssModule?,
        ~src?,
        ~children,
        (),
      ),
      children,
    );
  };
};
