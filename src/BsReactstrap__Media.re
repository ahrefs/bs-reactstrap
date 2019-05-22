[@bs.module "reactstrap"] [@react.component]
external make:
  (
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
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Media";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
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
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
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
        ~children,
        (),
      ),
      children,
    );
  };
};
