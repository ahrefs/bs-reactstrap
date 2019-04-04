[@bs.module "reactstrap"]
external dropdownItem: ReasonReact.reactClass = "DropdownItem";

[@bs.obj]
external makeProps:
  (
    ~active: bool=?,
    ~disabled: bool=?,
    ~divider: bool=?,
    ~tag: 'a=?,
    ~header: bool=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~toggle: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~active=?,
      ~disabled=?,
      ~divider=?,
      ~tag=?,
      ~header=?,
      ~onClick=?,
      ~className=?,
      ~cssModule=?,
      ~toggle=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownItem,
    ~props=
      makeProps(
        ~active?,
        ~disabled?,
        ~divider?,
        ~tag?,
        ~header?,
        ~onClick?,
        ~className?,
        ~cssModule?,
        ~toggle?,
        (),
      ),
    children,
  );