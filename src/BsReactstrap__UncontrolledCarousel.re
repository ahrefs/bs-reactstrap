[@bs.module "reactstrap"] [@react.component]
external make:
  (
    ~items: 'a,
    ~indicators: bool=?,
    ~controls: bool=?,
    ~autoPlay: bool=?,
    ~activeIndex: 'b=?,
    ~next: 'c=?,
    ~previous: 'd=?,
    ~goToIndex: 'e=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "UncontrolledCarousel";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~items,
        ~indicators=?,
        ~controls=?,
        ~autoPlay=?,
        ~activeIndex=?,
        ~next=?,
        ~previous=?,
        ~goToIndex=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~items,
        ~indicators?,
        ~controls?,
        ~autoPlay?,
        ~activeIndex?,
        ~next?,
        ~previous?,
        ~goToIndex?,
        ~children,
        (),
      ),
      children,
    );
  };
};
