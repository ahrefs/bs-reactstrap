[@bs.module "reactstrap"] external button: ReasonReact.reactClass = "Button";

[@bs.obj]
external makeProps:
  (
    ~active: bool=?,
    ~block: bool=?,
    ~color: [@bs.string] [
              | `primary
              | `secondary
              | `success
              | `info
              | `warning
              | `danger
              | `link
            ]
              =?,
    ~disabled: bool=?,
    ~outline: bool=?,
    ~tag: 'a=?,
    ~id: string=?,
    ~innerRef: 'b=?,
    ~onClick: 'c=?,
    ~size: string=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~active=?,
      ~block=?,
      ~color=?,
      ~disabled=?,
      ~outline=?,
      ~tag=?,
      ~id=?,
      ~innerRef=?,
      ~onClick=?,
      ~size=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=
      makeProps(
        ~active?,
        ~block?,
        ~color?,
        ~disabled?,
        ~outline?,
        ~tag?,
        ~id?,
        ~innerRef?,
        ~onClick?,
        ~size?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
