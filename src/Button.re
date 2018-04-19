[@bs.module "reactstrap"] external button : ReasonReact.reactClass = "Button";

[@bs.obj]
external makeProps : (
  ~active: bool=?,
  ~block: bool=?,
  ~color: string=?,
  ~disabled: bool=?,
  ~outline: bool=?,
  ~tag: 'a=?,
  ~innerRef: 'b=?,
  ~onClick: 'c=?,
  ~size: string=?,
  ~children: 'd=?,
  ~className: string=?,
  ~cssModule: 'e=?,
  unit
) => _ = "";

let make = (
  ~active=?,
  ~block=?,
  ~color=?,
  ~disabled=?,
  ~outline=?,
  ~tag=?,
  ~innerRef=?,
  ~onClick=?,
  ~size=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=button,
    ~props=makeProps(
      ~active?,
      ~block?,
      ~color?,
      ~disabled?,
      ~outline?,
      ~tag?,
      ~innerRef?,
      ~onClick?,
      ~size?,
      ~children?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
