[@bs.module "reactstrap"] external navLink: ReasonReact.reactClass = "NavLink";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~innerRef: 'b=?,
    ~disabled: bool=?,
    ~active: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~href: 'e=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~innerRef=?,
      ~disabled=?,
      ~active=?,
      ~className=?,
      ~cssModule=?,
      ~onClick=?,
      ~href=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navLink,
    ~props=
      makeProps(
        ~tag?,
        ~innerRef?,
        ~disabled?,
        ~active?,
        ~className?,
        ~cssModule?,
        ~onClick?,
        ~href?,
        (),
      ),
    children,
  );
