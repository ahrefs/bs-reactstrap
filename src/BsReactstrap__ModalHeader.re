[@bs.module "reactstrap"]
external modalHeader: ReasonReact.reactClass = "ModalHeader";

[@bs.obj]
external makeProps:
  (
    ~tag: 'a=?,
    ~wrapTag: 'b=?,
    ~toggle: 'c=?,
    ~className: string=?,
    ~cssModule: 'd=?,
    ~closeAriaLabel: string=?,
    ~charCode: 'e=?,
    ~close: 'f=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~tag=?,
      ~wrapTag=?,
      ~toggle=?,
      ~className=?,
      ~cssModule=?,
      ~closeAriaLabel=?,
      ~charCode=?,
      ~close=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modalHeader,
    ~props=
      makeProps(
        ~tag?,
        ~wrapTag?,
        ~toggle?,
        ~className?,
        ~cssModule?,
        ~closeAriaLabel?,
        ~charCode?,
        ~close?,
        (),
      ),
    children,
  );
