[@bs.module "reactstrap"]
external uncontrolledCarousel : ReasonReact.reactClass =
  "UncontrolledCarousel";

type items;
type activeIndex;
type next;
type previous;
type goToIndex;

[@bs.deriving abstract]
type props = {
  items,
  [@bs.optional]
  indicators: bool,
  [@bs.optional]
  controls: bool,
  [@bs.optional]
  autoPlay: bool,
  [@bs.optional]
  activeIndex,
  [@bs.optional]
  next,
  [@bs.optional]
  previous,
  [@bs.optional]
  goToIndex,
};

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
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=uncontrolledCarousel,
    ~props=
      props(
        ~items,
        ~indicators?,
        ~controls?,
        ~autoPlay?,
        ~activeIndex?,
        ~next?,
        ~previous?,
        ~goToIndex?,
        (),
      ),
    children,
  );