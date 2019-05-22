[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~next: bool=?,
    ~previous: bool=?,
    ~tag: 'b=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "PaginationLink";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~ariaLabel=?,
        ~className=?,
        ~cssModule=?,
        ~next=?,
        ~previous=?,
        ~tag=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~next?,
        ~previous?,
        ~tag?,
        ~children,
        (),
      ),
      children,
    );
  };
};
