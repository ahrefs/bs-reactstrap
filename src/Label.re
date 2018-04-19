[@bs.module "reactstrap"] external label : ReasonReact.reactClass = "Label";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~hidden: bool=?,
  ~check: bool=?,
  ~size: string=?,
  ~for: string=?,
  ~tag: string=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~xs: 'c=?,
  ~sm: 'd=?,
  ~md: 'e=?,
  ~lg: 'f=?,
  ~xl: 'g=?,
  ~widths: 'h=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~hidden=?,
  ~check=?,
  ~size=?,
  ~for=?,
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
      ~children?,
      ~hidden?,
      ~check?,
      ~size?,
      ~for?,
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
