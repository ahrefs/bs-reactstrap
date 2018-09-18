[@bs.module "reactstrap"]
external progress: ReasonReact.reactClass = "Progress";

[@bs.obj]
external makeProps:
  (
    ~bar: bool=?,
    ~multi: bool=?,
    ~tag: string=?,
    ~value: 'a=?,
    ~max: 'b=?,
    ~animated: bool=?,
    ~striped: bool=?,
    ~color: string=?,
    ~className: string=?,
    ~barClassName: string=?,
    ~cssModule: 'c=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~bar=?,
      ~multi=?,
      ~tag=?,
      ~value=?,
      ~max=?,
      ~animated=?,
      ~striped=?,
      ~color=?,
      ~className=?,
      ~barClassName=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=progress,
    ~props=
      makeProps(
        ~bar?,
        ~multi?,
        ~tag?,
        ~value?,
        ~max?,
        ~animated?,
        ~striped?,
        ~color?,
        ~className?,
        ~barClassName?,
        ~cssModule?,
        (),
      ),
    children,
  );
