[@bs.module "reactstrap"] external dropdownToggle : ReasonReact.reactClass = "DropdownToggle";

[@bs.obj]
external makeProps : (
  ~caret: bool=?,
  ~color: string=?,
  ~children: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~disabled: bool=?,
  ~onClick: 'c=?,
  ~aria-haspopup: bool=?,
  ~split: bool=?,
  ~tag: 'd=?,
  ~nav: bool=?,
  unit
) => _ = "";

let make = (
  ~caret=?,
  ~color=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  ~disabled=?,
  ~onClick=?,
  ~aria-haspopup=?,
  ~split=?,
  ~tag=?,
  ~nav=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=dropdownToggle,
    ~props=makeProps(
      ~caret?,
      ~color?,
      ~children?,
      ~className?,
      ~cssModule?,
      ~disabled?,
      ~onClick?,
      ~aria-haspopup?,
      ~split?,
      ~tag?,
      ~nav?,
      ()
    ),
    children
  );
