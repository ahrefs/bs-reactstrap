[@bs.module "reactstrap"]
external uncontrolledCarousel: ReasonReact.reactClass = "UncontrolledCarousel";

[@bs.obj]
external makeProps:
  (
    ~items: 'a,
    ~indicators: bool=?,
    ~controls: bool=?,
    ~autoPlay: bool=?,
    ~defaultActiveIndex: int=?,
    ~activeIndex: 'b=?,
    ~next: 'c=?,
    ~previous: 'd=?,
    ~goToIndex: 'e=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~items,
      ~indicators=?,
      ~controls=?,
      ~autoPlay=?,
      ~defaultActiveIndex=?,
      ~activeIndex=?,
      ~next=?,
      ~previous=?,
      ~goToIndex=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=uncontrolledCarousel,
    ~props=
      makeProps(
        ~items,
        ~indicators?,
        ~controls?,
        ~autoPlay?,
        ~defaultActiveIndex?,
        ~activeIndex?,
        ~next?,
        ~previous?,
        ~goToIndex?,
        (),
      ),
    children,
  );
