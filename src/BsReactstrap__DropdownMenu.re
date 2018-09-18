[@bs.module "reactstrap"]
external dropdownMenu: ReasonReact.reactClass = "DropdownMenu";

[@bs.obj]
external makeProps:
  (
    ~tag: string=?,
    ~right: bool=?,
    ~flip: bool=?,
    ~modifiers: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~right=?,
      ~flip=?,
      ~modifiers=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownMenu,
    ~props=
      makeProps(
        ~tag?,
        ~right?,
        ~flip?,
        ~modifiers?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
