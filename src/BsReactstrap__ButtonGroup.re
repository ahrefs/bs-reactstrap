[@bs.module "reactstrap"]
external buttonGroup: ReasonReact.reactClass = "ButtonGroup";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~ariaLabel: string=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~role: string=?,
    ~size: string=?,
    ~vertical: bool=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~ariaLabel=?,
      ~className=?,
      ~cssModule=?,
      ~role=?,
      ~size=?,
      ~vertical=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=buttonGroup,
    ~props=
      makeProps(
        ~tag?,
        ~ariaLabel?,
        ~className?,
        ~cssModule?,
        ~role?,
        ~size?,
        ~vertical?,
        (),
      ),
    children,
  );
