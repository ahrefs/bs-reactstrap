[@bs.module "reactstrap"] [@react.component]
external make:
  (~tag: 'a=?, ~flush: bool=?, ~className: string=?, ~cssModule: 'b=?, unit) => React.element =
  "ListGroup";