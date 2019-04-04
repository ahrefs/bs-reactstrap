[@bs.module "reactstrap"]
external buttonDropdown: ReasonReact.reactClass = "ButtonDropdown";

[@bs.obj]
external makeProps:
  (
    ~direction: [@bs.string] [ | `up | `down | `left | `right]=?,
    ~disabled: bool=?,
    ~group: bool=?,
    ~isOpen: bool=?,
    ~tag: 'a=?,
    ~toggle: ReactEvent.Mouse.t => unit=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~direction=?,
      ~disabled=?,
      ~group=?,
      ~isOpen=?,
      ~tag=?,
      ~toggle=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonDropdown,
    ~props=
      makeProps(
        ~direction?,
        ~disabled?,
        ~group?,
        ~isOpen?,
        ~tag?,
        ~toggle?,
        (),
      ),
    children,
  );