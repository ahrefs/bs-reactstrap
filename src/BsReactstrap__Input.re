open BsReactstrap__Props;

[@bs.module "reactstrap"] external input : ReasonReact.reactClass = "Input";

type type_;
type state;
type valid;
type static;
type innerRef;

[@bs.deriving abstract]
type props = {
  [@bs.optional] [@bs.as "type"]
  type_: string,
  [@bs.optional]
  size: string,
  [@bs.optional]
  bsSize: string,
  [@bs.optional]
  state,
  [@bs.optional]
  valid: bool,
  [@bs.optional]
  invalid: bool,
  [@bs.optional]
  tag,
  [@bs.optional]
  innerRef,
  [@bs.optional]
  static,
  [@bs.optional]
  plaintext: bool,
  [@bs.optional]
  addon: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~type_=?,
      ~size=?,
      ~bsSize=?,
      ~state=?,
      ~valid=?,
      ~invalid=?,
      ~tag=?,
      ~innerRef=?,
      ~static=?,
      ~plaintext=?,
      ~addon=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=input,
    ~props=
      props(
        ~type_?,
        ~size?,
        ~bsSize?,
        ~state?,
        ~valid?,
        ~invalid?,
        ~tag?,
        ~innerRef?,
        ~static?,
        ~plaintext?,
        ~addon?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
