[@bs.module "reactstrap"] external portal : ReasonReact.reactClass = "Portal";

[@bs.obj]
external makeProps : (
  ~node: 'a=?,
  unit
) => _ = "";

let make = (
  ~node=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=portal,
    ~props=makeProps(
      ~node?,
      ()
    ),
    children
  );
