[@bs.module "reactstrap"] external label : ReasonReact.reactClass = "Label";

[@bs.obj]
external makeProps : (
  ~hidden: bool=?,
  ~check: bool=?,
  ~size: string=?,
  ~for_: string=?,
  ~tag: string=?,
  ~className: string=?,
  ~cssModule: 'a=?,
  ~xs: 'b=?,
  ~sm: 'c=?,
  ~md: 'd=?,
  ~lg: 'e=?,
  ~xl: 'f=?,
  ~widths: 'g=?,
  unit
) => _ = "";

let make = (
  ~hidden=?,
  ~check=?,
  ~size=?,
  ~for_=?,
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~xs=?,
  ~sm=?,
  ~md=?,
  ~lg=?,
  ~xl=?,
  ~widths=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=label,
    ~props=makeProps(
      ~hidden?,
      ~check?,
      ~size?,
      ~for_?,
      ~tag?,
      ~className?,
      ~cssModule?,
      ~xs?,
      ~sm?,
      ~md?,
      ~lg?,
      ~xl?,
      ~widths?,
      ()
    ),
    children
  );
