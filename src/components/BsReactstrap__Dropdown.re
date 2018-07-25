[@bs.module "reactstrap"]
external dropdown : ReasonReact.reactClass = "Dropdown";

type toggle;
type dropup;
type direction;
type addonType;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  dropup,
  [@bs.optional]
  direction,
  [@bs.optional]
  group: bool,
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  nav: bool,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  addonType,
  [@bs.optional]
  size: string,
  [@bs.optional]
  tag: string,
  [@bs.optional]
  toggle,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  inNavbar: bool,
};

let make =
    (
      ~disabled=?,
      ~dropup=?,
      ~direction=?,
      ~group=?,
      ~isOpen=?,
      ~nav=?,
      ~active=?,
      ~addonType=?,
      ~size=?,
      ~tag=?,
      ~toggle=?,
      ~className=?,
      ~cssModule=?,
      ~inNavbar=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdown,
    ~props=
      props(
        ~disabled?,
        ~dropup?,
        ~direction?,
        ~group?,
        ~isOpen?,
        ~nav?,
        ~active?,
        ~addonType?,
        ~size?,
        ~tag?,
        ~toggle?,
        ~className?,
        ~cssModule?,
        ~inNavbar?,
        (),
      ),
    children,
  );