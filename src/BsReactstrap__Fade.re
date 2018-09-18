[@bs.module "reactstrap"] external fade: ReasonReact.reactClass = "Fade";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~baseClass: string=?,
    ~baseClassActive: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~baseClass=?,
      ~baseClassActive=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=fade,
    ~props=
      makeProps(
        ~tag?,
        ~baseClass?,
        ~baseClassActive?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
