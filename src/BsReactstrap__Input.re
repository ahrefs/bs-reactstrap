[@bs.module "reactstrap"] external input: ReasonReact.reactClass = "Input";

[@bs.obj]
external makeProps:
  (
    ~_type: string=?,
    ~size: string=?,
    ~bsSize: string=?,
    ~state: 'a=?,
    ~valid: bool=?,
    ~invalid: bool=?,
    ~tag: 'b=?,
    ~innerRef: 'c=?,
    ~static: 'd=?,
    ~plaintext: bool=?,
    ~addon: bool=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onBlur: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~placeholder: string=?,
    ~value: string=?,
    ~name: string=?,
    ~id: string=?,
    ~className: string=?,
    ~cssModule: 'e=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~type_=?,
      ~size=?,
      ~bsSize=?,
      ~state=?,
      ~valid=?,
      ~invalid=?,
      ~tag=?,
      ~innerRef=?,
      ~static=?,
      ~plaintext=?,
      ~addon=?,
      ~onChange=?,
      ~onBlur=?,
      ~onFocus=?,
      ~placeholder=?,
      ~value=?,
      ~name=?,
      ~id=?,
      ~className=?,
      ~cssModule=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=input,
    ~props=
      makeProps(
        ~_type=?type_,
        ~size?,
        ~bsSize?,
        ~state?,
        ~valid?,
        ~invalid?,
        ~tag?,
        ~innerRef?,
        ~static?,
        ~plaintext?,
        ~addon?,
        ~onChange?,
        ~onBlur?,
        ~onFocus?,
        ~placeholder?,
        ~value?,
        ~name?,
        ~id?,
        ~className?,
        ~cssModule?,
        (),
      ),
    children,
  );