[@bs.module "reactstrap"]
external dropdownToggle: ReasonReact.reactClass = "DropdownToggle";

[@bs.obj]
external makeProps:
  (
    ~caret: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~cssModule: 'a=?,
    ~disabled: bool=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~ariaHaspopup: bool=?,
    ~split: bool=?,
    ~tag: 'c=?,
    ~nav: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~caret=?,
      ~color=?,
      ~className=?,
      ~cssModule=?,
      ~disabled=?,
      ~onClick=?,
      ~ariaHaspopup=?,
      ~split=?,
      ~tag=?,
      ~nav=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownToggle,
    ~props=
      makeProps(
        ~caret?,
        ~color?,
        ~className?,
        ~cssModule?,
        ~disabled?,
        ~onClick?,
        ~ariaHaspopup?,
        ~split?,
        ~tag?,
        ~nav?,
        (),
      ),
    children,
  );