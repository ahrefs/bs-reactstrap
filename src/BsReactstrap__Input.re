[@bs.module "reactstrap"] [@react.component]
external make:
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
    ~min: float=?,
    ~max: float=?,
    ~rows: int=?,
    ~name: string=?,
    ~id: string=?,
    ~className: string=?,
    ~cssModule: 'e=?,
    ~readOnly: bool=?,
    ~children: React.element=?,
    unit
  ) =>
  React.element =
  "Input";

module Jsx2 = {
  let component = ReasonReact.statelessComponent(__MODULE__);

  let make =
      (
        ~_type=?,
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
        ~min=?,
        ~max=?,
        ~rows=?,
        ~name=?,
        ~id=?,
        ~className=?,
        ~cssModule=?,
        ~readOnly=?,
        children,
      ) => {
    let children = React.array(children);
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(
        ~_type?,
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
        ~min?,
        ~max?,
        ~rows?,
        ~name?,
        ~id?,
        ~className?,
        ~cssModule?,
        ~readOnly?,
        ~children,
        (),
      ),
      children,
    );
  };
};
