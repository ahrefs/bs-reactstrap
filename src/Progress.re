[@bs.module "reactstrap"] external progress : ReasonReact.reactClass = "Progress";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~bar: bool=?,
  ~multi: bool=?,
  ~tag: string=?,
  ~value: 'b=?,
  ~max: 'c=?,
  ~animated: bool=?,
  ~striped: bool=?,
  ~color: string=?,
  ~className: string=?,
  ~barClassName: string=?,
  ~cssModule: 'd=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~bar=?,
  ~multi=?,
  ~tag=?,
  ~value=?,
  ~max=?,
  ~animated=?,
  ~striped=?,
  ~color=?,
  ~className=?,
  ~barClassName=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=progress,
    ~props=makeProps(
      ~children?,
      ~bar?,
      ~multi?,
      ~tag?,
      ~value?,
      ~max?,
      ~animated?,
      ~striped?,
      ~color?,
      ~className?,
      ~barClassName?,
      ~cssModule?,
      ()
    ),
    children
  );
