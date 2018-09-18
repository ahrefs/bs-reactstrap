[@bs.module "reactstrap"]
external inputGroupButton: ReasonReact.reactClass = "InputGroupButton";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~addonType: 'b,
    ~groupClassName: string=?,
    ~groupAttributes: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~addonType,
      ~groupClassName=?,
      ~groupAttributes=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=inputGroupButton,
    ~props=
      makeProps(
        ~tag?,
        ~addonType,
        ~groupClassName?,
        ~groupAttributes?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
