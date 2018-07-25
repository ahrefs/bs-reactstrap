open BsReactstrap__Props;

[@bs.module "reactstrap"] external fade : ReasonReact.reactClass = "Fade";

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  tag,
  [@bs.optional]
  baseClass: string,
  [@bs.optional]
  baseClassActive: string,
  [@bs.optional]
  className: string,
  [@bs.optional]
  cssModule,
};

let make =
    (
      ~tag=?,
      ~baseClass=?,
      ~baseClassActive=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=fade,
    ~props=
      props(
        ~tag?,
        ~baseClass?,
        ~baseClassActive?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );
