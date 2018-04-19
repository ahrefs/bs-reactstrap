[@bs.module "reactstrap"] external input : ReasonReact.reactClass = "Input";

[@bs.obj]
external makeProps : (
  ~children: 'a=?,
  ~type: string=?,
  ~size: string=?,
  ~bsSize: string=?,
  ~state: 'b=?,
  ~valid: bool=?,
  ~invalid: bool=?,
  ~tag: 'c=?,
  ~innerRef: 'd=?,
  ~static: 'e=?,
  ~plaintext: bool=?,
  ~addon: bool=?,
  ~className: string=?,
  ~cssModule: 'f=?,
  unit
) => _ = "";

let make = (
  ~children=?,
  ~type=?,
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
      ~children?,
      ~type?,
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
