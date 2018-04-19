[@bs.module "reactstrap"] external portal : ReasonReact.reactClass = "Portal";

[@bs.obj]
external makeProps : (
  ~children: 'a,
  ~node: 'b=?,
  unit
) => _ = "";

let make = (
  ~children,
  ~node=?,
  children
) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=portal,
    ~props=makeProps(
      ~children,
      ~node?,
      ()
    ),
    children
  );
