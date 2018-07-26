open BsReactstrap__Props;

[@bs.module "reactstrap"] external card : ReasonReact.reactClass = "Card";

type block;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  inverse: bool,
  [@bs.optional]
  color: string,
  [@bs.optional]
  block,
  [@bs.optional]
  body: bool,
  [@bs.optional]
  outline: bool,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~tag=?,
      ~inverse=?,
      ~color=?,
      ~block=?,
      ~body=?,
      ~outline=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=card,
    ~props=
      props(
        ~tag?,
        ~inverse?,
        ~color?,
        ~block?,
        ~body?,
        ~outline?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
