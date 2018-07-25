type tag;
type cssModule;

module type BaseComponent = {let reactClass: ReasonReact.reactClass;};

module MakeCommonComponent = (BaseComponent: BaseComponent) => {
  [@bs.deriving abstract]
  type commonProps = {
    [@bs.optional]
    tag,
    [@bs.optional]
    className: string,
    [@bs.optional]
    cssModule,
  };
  let make = (~tag=?, ~className=?, ~cssModule=?, children) =>
    ReasonReact.wrapJsForReason(
      ~reactClass=BaseComponent.reactClass,
      ~props=commonProps(~tag?, ~className?, ~cssModule?, ()),
      children,
    );
};