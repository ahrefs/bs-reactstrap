[@bs.module "reactstrap"] [@react.component]
external make:
  (~tag: 'a=?, ~noGutters: bool=?, ~className: string=?, ~cssModule: 'b=?, unit) => React.element =
  "Row";