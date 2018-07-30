[@bs.module "reactstrap"] external input : ReasonReact.reactClass = "Input";

[@bs.obj]
external makeProps : (
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
  ~className: string=?,
  ~cssModule: 'e=?,
  unit
) => _ = "";

let make = (
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
  ~className=?,
  ~cssModule=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=input,
    ~props=makeProps(
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
      ~className?,
      ~cssModule?,
      ()
    ),
    children
  );
