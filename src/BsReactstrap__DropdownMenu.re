open BsReactstrap__Props;

[@bs.module "reactstrap"]
external dropdownMenu : ReasonReact.reactClass = "DropdownMenu";

type modifiers;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag: string,
  [@bs.optional]
  right: bool,
  [@bs.optional]
  flip: bool,
  [@bs.optional]
  modifiers,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

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
      props(
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
