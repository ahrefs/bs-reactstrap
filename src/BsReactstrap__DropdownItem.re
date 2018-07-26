open BsReactstrap__Props;

[@bs.module "reactstrap"]
external dropdownItem : ReasonReact.reactClass = "DropdownItem";
type onClick;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  active: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  divider: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  header: bool,
  [@bs.optional]
  onClick,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
  [@bs.optional]
  toggle: bool,
};

let make =
    (
      ~active=?,
      ~disabled=?,
      ~divider=?,
      ~tag=?,
      ~header=?,
      ~onClick=?,
      ~className=?,
      ~cssModule=?,
      ~toggle=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownItem,
    ~props=
      props(
        ~active?,
        ~disabled?,
        ~divider?,
        ~tag?,
        ~header?,
        ~onClick?,
        ~className?,
        ~cssModule?,
        ~toggle?,
        (),
      ),
    children,
  );
