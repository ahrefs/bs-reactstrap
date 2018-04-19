[@bs.module "reactstrap"] external modal : ReasonReact.reactClass = "Modal";

let jsBoolFromOpt = (var: option(bool)) => {
  Js.Option.map([@bs] (b => Js.Boolean.to_js_boolean(b)), var)
};

[@bs.obj]
external makeProps : (
  ~isOpen: Js.boolean=?,
  ~autoFocus: Js.boolean=?,
  ~centered: Js.boolean=?,
  ~size: string=?,
  ~toggle: 'a=?,
  ~role: string=?,
  ~labelledBy: string=?,
  ~keyboard: Js.boolean=?,
  ~backdrop: 'b=?,
  ~onEnter: 'c=?,
  ~onExit: 'd=?,
  ~onOpened: 'e=?,
  ~onClosed: 'f=?,
  ~className: string=?,
  ~wrapClassName: string=?,
  ~modalClassName: string=?,
  ~backdropClassName: string=?,
  ~contentClassName: string=?,
  ~fade: Js.boolean=?,
  ~cssModule: 'g=?,
  ~zIndex: 'h=?,
  ~backdropTransition: 'i=?,
  ~modalTransition: 'j=?,
  unit
) => _ = "";

let make = (
  ~isOpen=?,
  ~autoFocus=?,
  ~centered=?,
  ~size=?,
  ~toggle=?,
  ~role=?,
  ~labelledBy=?,
  ~keyboard=?,
  ~backdrop=?,
  ~onEnter=?,
  ~onExit=?,
  ~onOpened=?,
  ~onClosed=?,
  ~className=?,
  ~wrapClassName=?,
  ~modalClassName=?,
  ~backdropClassName=?,
  ~contentClassName=?,
  ~fade=?,
  ~cssModule=?,
  ~zIndex=?,
  ~backdropTransition=?,
  ~modalTransition=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modal,
    ~props=makeProps(
      ~isOpen=?jsBoolFromOpt(isOpen),
      ~autoFocus=?jsBoolFromOpt(autoFocus),
      ~centered=?jsBoolFromOpt(centered),
      ~size?,
      ~toggle?,
      ~role?,
      ~labelledBy?,
      ~keyboard=?jsBoolFromOpt(keyboard),
      ~backdrop?,
      ~onEnter?,
      ~onExit?,
      ~onOpened?,
      ~onClosed?,
      ~className?,
      ~wrapClassName?,
      ~modalClassName?,
      ~backdropClassName?,
      ~contentClassName?,
      ~fade=?jsBoolFromOpt(fade),
      ~cssModule?,
      ~zIndex?,
      ~backdropTransition?,
      ~modalTransition?,
      ()
    ),
    children
  );
