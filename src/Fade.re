[@bs.module "reactstrap"] external fade : ReasonReact.reactClass = "Fade";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~tag: 'b=?,
  ~baseClass: string=?,
  ~baseClassActive: string=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~tag=?,
  ~baseClass=?,
  ~baseClassActive=?,
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=fade,
    ~props=makeProps(
      ~children?,
      ~tag?,
      ~baseClass?,
      ~baseClassActive?,
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
