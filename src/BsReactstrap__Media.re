open BsReactstrap__Props;

[@bs.module "reactstrap"] external media : ReasonReact.reactClass = "Media";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  body: bool,
  [@bs.optional]
  bottom: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  heading: bool,
  [@bs.optional]
  left: bool,
  [@bs.optional]
  list: bool,
  [@bs.optional]
  middle: bool,
  [@bs.optional]
  object_: bool,
  [@bs.optional]
  right: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  top: bool,
};

let make =
    (
      ~body=?,
      ~bottom=?,
      ~className=?,
      ~cssModule=?,
      ~heading=?,
      ~left=?,
      ~list=?,
      ~middle=?,
      ~object_=?,
      ~right=?,
      ~tag=?,
      ~top=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=media,
    ~props=
      props(
        ~body?,
        ~bottom?,
        ~className?,
        ~cssModule?,
        ~heading?,
        ~left?,
        ~list?,
        ~middle?,
        ~object_?,
        ~right?,
        ~tag?,
        ~top?,
        (),
      ),
    children,
  );
