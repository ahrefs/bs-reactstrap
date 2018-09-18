[@bs.module "reactstrap"] external card: ReasonReact.reactClass = "Card";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~inverse: bool=?,
    ~color: string=?,
    ~block: 'b=?,
    ~body: bool=?,
    ~outline: bool=?,
    ~className: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~inverse=?,
      ~color=?,
      ~block=?,
      ~body=?,
      ~outline=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=card,
    ~props=
      makeProps(
        ~tag?,
        ~inverse?,
        ~color?,
        ~block?,
        ~body?,
        ~outline?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
