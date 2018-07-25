open BsReactstrap__Props;

[@bs.module "reactstrap"]
external listGroupItem : ReasonReact.reactClass = "ListGroupItem";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  active: bool,
  [@bs.optional]
  disabled: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  action: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

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
      props(
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
