open BsReactstrap__Props;

[@bs.module "reactstrap"] external nav : ReasonReact.reactClass = "Nav";

type vertical;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tabs: bool,
  [@bs.optional]
  pills: bool,
  [@bs.optional]
  vertical,
  [@bs.optional]
  horizontal: string,
  [@bs.optional]
  justified: bool,
  [@bs.optional]
  fill: bool,
  [@bs.optional]
  navbar: bool,
  [@bs.optional]
  card: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~tabs=?,
      ~pills=?,
      ~vertical=?,
      ~horizontal=?,
      ~justified=?,
      ~fill=?,
      ~navbar=?,
      ~card=?,
      ~tag=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=nav,
    ~props=
      props(
        ~tabs?,
        ~pills?,
        ~vertical?,
        ~horizontal?,
        ~justified?,
        ~fill?,
        ~navbar?,
        ~card?,
        ~tag?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
