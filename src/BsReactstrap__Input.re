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
    unit
  ) =>
  React.element =
  "Input";
