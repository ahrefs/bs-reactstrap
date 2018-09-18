[@bs.module "reactstrap"]
external listGroupItem: ReasonReact.reactClass = "ListGroupItem";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~active: bool=?,
    ~disabled: bool=?,
    ~color: string=?,
    ~action: bool=?,
    ~className: 'b=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~active=?,
      ~disabled=?,
      ~color=?,
      ~action=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=listGroupItem,
    ~props=
      makeProps(
        ~tag?,
        ~active?,
        ~disabled?,
        ~color?,
        ~action?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
