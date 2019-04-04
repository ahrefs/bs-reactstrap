[@bs.module "reactstrap"]
external breadcrumb: ReasonReact.reactClass = "Breadcrumb";

[@bs.obj]
external makeProps:
  (
    ~className: string=?,
    ~cssModule: 'a=?,
    ~listClassName: array(string)=?,
    ~listTag: 'b=?,
    ~tag: string=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~className=?,
      ~cssModule=?,
      ~listClassName=?,
      ~listTag=?,
      ~tag=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=breadcrumb,
    ~props=
      makeProps(
        ~className?,
        ~cssModule?,
        ~listClassName?,
        ~listTag?,
        ~tag?,
        (),
      ),
    children,
  );
