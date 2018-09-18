[@bs.module "reactstrap"] external col: ReasonReact.reactClass = "Col";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~xs: 'b=?,
    ~sm: 'c=?,
    ~md: 'd=?,
    ~lg: 'e=?,
    ~xl: 'f=?,
    ~className: string=?,
    ~cssModule: 'g=?,
    ~widths: 'h=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~xs=?,
      ~sm=?,
      ~md=?,
      ~lg=?,
      ~xl=?,
      ~className=?,
      ~cssModule=?,
      ~widths=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=col,
    ~props=
      makeProps(
        ~tag?,
        ~xs?,
        ~sm?,
        ~md?,
        ~lg?,
        ~xl?,
        ~className?,
        ~cssModule?,
        ~widths?,
        (),
      ),
    children,
  );
