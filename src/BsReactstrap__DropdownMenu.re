[@bs.module "reactstrap"]
external dropdownMenu: ReasonReact.reactClass = "DropdownMenu";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~right: bool=?,
    ~flip: bool=?,
    ~modifiers: 'a=?,
    ~className: string=?,
    ~cssModule: 'b=?,
    ~persist: bool=?,
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
      ~persist=?,
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
        ~persist?,
        (),
      ),
    children,
  );