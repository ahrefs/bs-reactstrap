[@bs.module "reactstrap"] external modal : ReasonReact.reactClass = "Modal";

type toggle;
type backdrop;
type onExit;
type onReturn;
type onOpened;
type onClosed;
type external_;
type onEnter;
type zIndex;

type backdropTransition;
type modalTransition;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  isOpen: bool,
  [@bs.optional]
  autoFocus: bool,
  [@bs.optional]
  centered: bool,
  [@bs.optional]
  size: string,
  [@bs.optional]
  toggle,
  [@bs.optional]
  keyboard: bool,
  [@bs.optional]
  role: string,
  [@bs.optional]
  labelledBy: string,
  [@bs.optional]
  backdrop,
  [@bs.optional]
  onEnter,
  [@bs.optional]
  onExit,
  [@bs.optional]
  onOpened,
  [@bs.optional]
  onClosed,
  [@bs.optional]
  className: string,
  [@bs.optional]
  wrapClassName: string,
  [@bs.optional]
  modalClassName: string,
  [@bs.optional]
  backdropClassName: string,
  [@bs.optional]
  contentClassName: string,
  [@bs.optional] [@bs.as "external"]
  external_,
  [@bs.optional]
  fade: bool,
  [@bs.optional]
  cssModule: BsReactstrap__Props.cssModule,
  [@bs.optional]
  zIndex,
  [@bs.optional]
  backdropTransition,
  [@bs.optional]
  modalTransition,
};

let make =
    (
      ~isOpen=?,
      ~autoFocus=?,
      ~centered=?,
      ~size=?,
      ~toggle=?,
      ~keyboard=?,
      ~role=?,
      ~labelledBy=?,
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
      ~external_=?,
      ~fade=?,
      ~cssModule=?,
      ~zIndex=?,
      ~backdropTransition=?,
      ~modalTransition=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=modal,
    ~props=
      props(
        ~isOpen?,
        ~autoFocus?,
        ~centered?,
        ~size?,
        ~toggle?,
        ~keyboard?,
        ~role?,
        ~labelledBy?,
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
        ~external_?,
        ~fade?,
        ~cssModule?,
        ~zIndex?,
        ~backdropTransition?,
        ~modalTransition?,
        (),
      ),
    children,
  );