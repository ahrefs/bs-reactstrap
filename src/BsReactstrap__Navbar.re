[@bs.module "reactstrap"] external navbar : ReasonReact.reactClass = "Navbar";

[@bs.obj]
external makeProps : (
  ~light: bool=?,
  ~dark: bool=?,
  ~inverse: 'a=?,
  ~full: bool=?,
  ~fixed: string=?,
  ~sticky: string=?,
  ~color: string=?,
  ~role: string=?,
  ~tag: 'b=?,
  ~className: string=?,
  ~cssModule: 'c=?,
  ~toggleable: 'd=?,
  ~expand: 'e=?,
  unit
) => _ = "";

let make = (
  ~light=?,
  ~dark=?,
  ~inverse=?,
  ~full=?,
  ~fixed=?,
  ~sticky=?,
  ~color=?,
  ~role=?,
  ~tag=?,
  ~className=?,
  ~cssModule=?,
  ~toggleable=?,
  ~expand=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=navbar,
    ~props=makeProps(
      ~light?,
      ~dark?,
      ~inverse?,
      ~full?,
      ~fixed?,
      ~sticky?,
      ~color?,
      ~role?,
      ~tag?,
      ~className?,
      ~cssModule?,
      ~toggleable?,
      ~expand?,
      ()
    ),
    children
  );
