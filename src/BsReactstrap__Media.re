[@bs.module "reactstrap"] external media : ReasonReact.reactClass = "Media";

[@bs.obj]
external makeProps : (
  ~body: bool=?,
  ~bottom: bool=?,
  ~className: string=?,
  ~cssModule: 'a=?,
  ~heading: bool=?,
  ~left: bool=?,
  ~list: bool=?,
  ~middle: bool=?,
  ~object_: bool=?,
  ~right: bool=?,
  ~tag: 'b=?,
  ~top: bool=?,
  unit
) => _ = "";

let make = (
  ~body=?,
  ~bottom=?,
  ~className=?,
  ~cssModule=?,
  ~heading=?,
  ~left=?,
  ~list=?,
  ~middle=?,
  ~object_=?,
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
      ~className?,
      ~cssModule?,
      ~heading?,
      ~left?,
      ~list?,
      ~middle?,
      ~object_?,
      ~right?,
      ~tag?,
      ~top?,
      ()
    ),
    children
  );
