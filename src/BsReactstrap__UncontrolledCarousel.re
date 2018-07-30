[@bs.module "reactstrap"] external uncontrolledCarousel : ReasonReact.reactClass = "UncontrolledCarousel";

[@bs.obj]
external makeProps : (
  ~items: 'a,
  ~indicators: bool=?,
  ~controls: bool=?,
  ~autoPlay: bool=?,
  ~activeIndex: 'b=?,
  ~next: 'c=?,
  ~previous: 'd=?,
  ~goToIndex: 'e=?,
  unit
) => _ = "";

let make = (
  ~items,
  ~indicators=?,
  ~controls=?,
  ~autoPlay=?,
  ~activeIndex=?,
  ~next=?,
  ~previous=?,
  ~goToIndex=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=uncontrolledCarousel,
    ~props=makeProps(
      ~items,
      ~indicators?,
      ~controls?,
      ~autoPlay?,
      ~activeIndex?,
      ~next?,
      ~previous?,
      ~goToIndex?,
      ()
    ),
    children
  );
