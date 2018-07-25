[@bs.module "reactstrap"] external portal : ReasonReact.reactClass = "Portal";

type node;

[@bs.deriving abstract]
type props = {
  [@bs.optional]
  node,
};

let make = (~node=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=portal,
    ~props=props(~node?, ()),
    children,
  );