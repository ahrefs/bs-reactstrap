[@bs.module "reactstrap"] external badge: ReasonReact.reactClass = "Badge";

[@bs.obj]
external makeProps:
  (
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `succeess
              | `danger
              | `warning
              | `info
              | `light
              | `dark
            ]
              =?,
    ~pill: bool=?,
    ~tag: 'a=?,
    ~href: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (~color=?, ~pill=?, ~tag=?, ~href=?, ~className=?, ~cssModule=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=badge,
    ~props=
      makeProps(~color?, ~pill?, ~tag?, ~href?, ~className?, ~cssModule?, ()),
    children,
  );