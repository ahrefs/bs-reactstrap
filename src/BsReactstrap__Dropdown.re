[@bs.module "reactstrap"]
external dropdown: ReasonReact.reactClass = "Dropdown";

[@bs.obj]
external makeProps:
  (
    ~disabled: bool=?,
    ~dropup: 'a=?,
    ~direction: [@bs.string] [ | `up | `down | `left | `right]=?,
    ~group: bool=?,
    ~isOpen: bool=?,
    ~nav: bool=?,
    ~active: bool=?,
    ~addonType: 'c=?,
    ~size: string=?,
    ~tag: string=?,
    ~toggle: 'd=?,
    ~className: string=?,
    ~cssModule: 'e=?,
    ~inNavbar: bool=?,
    unit
  ) =>
  _ =
  "";

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
      makeProps(
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
