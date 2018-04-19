[@bs.module "reactstrap"] external media : ReasonReact.reactClass = "Media";

[@bs.obj]
external makeProps : (
  ~body: bool=?,
  ~bottom: bool=?,
  ~children: 'a=?,
  ~className: string=?,
  ~cssModule: 'b=?,
  ~heading: bool=?,
  ~left: bool=?,
  ~list: bool=?,
  ~middle: bool=?,
  ~object: bool=?,
  ~right: bool=?,
  ~tag: 'c=?,
  ~top: bool=?,
  unit
) => _ = "";

let make = (
  ~body=?,
  ~bottom=?,
  ~children=?,
  ~className=?,
  ~cssModule=?,
  ~heading=?,
  ~left=?,
  ~list=?,
  ~middle=?,
  ~object=?,
  ~right=?,
  ~tag=?,
  ~top=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=media,
    ~props=makeProps(
      ~body?,
      ~bottom?,
      ~children?,
      ~className?,
      ~cssModule?,
      ~heading?,
      ~left?,
      ~list?,
      ~middle?,
      ~object?,
      ~right?,
      ~tag?,
      ~top?,
      ()
    ),
    children
  );
