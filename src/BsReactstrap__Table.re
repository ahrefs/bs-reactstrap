[@bs.module "reactstrap"] external table : ReasonReact.reactClass = "Table";

[@bs.obj]
external makeProps : (
  ~className: string=?,
  ~cssModule: 'a=?,
  ~size: string=?,
  ~bordered: bool=?,
  ~borderless: bool=?,
  ~striped: bool=?,
  ~inverse: 'b=?,
  ~dark: bool=?,
  ~hover: bool=?,
  ~responsive: 'c=?,
  ~tag: 'd=?,
  ~responsiveTag: 'e=?,
  unit
) => _ = "";

let make = (
  ~className=?,
  ~cssModule=?,
  ~size=?,
  ~bordered=?,
  ~borderless=?,
  ~striped=?,
  ~inverse=?,
  ~dark=?,
  ~hover=?,
  ~responsive=?,
  ~tag=?,
  ~responsiveTag=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=table,
    ~props=makeProps(
      ~className?,
      ~cssModule?,
      ~size?,
      ~bordered?,
      ~borderless?,
      ~striped?,
      ~inverse?,
      ~dark?,
      ~hover?,
      ~responsive?,
      ~tag?,
      ~responsiveTag?,
      ()
    ),
    children
  );
