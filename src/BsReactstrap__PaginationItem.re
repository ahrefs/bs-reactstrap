[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PaginationItem";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (~active=?, ~className=?, ~cssModule=?, ~disabled=?, ~tag=?, children) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~active?,
        ~className?,
        ~cssModule?,
        ~disabled?,
        ~tag?,
        ~children,
        (),
      ),
      children,
    );
  };
};
