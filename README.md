# bs-reactstrap

> **Warning**
> This repository is no longer maintained, as we don't use it anymore at Ahrefs.

These are [Bucklescript](https://bucklescript.github.io/) bindings for [Reactstrap](https://reactstrap.github.io/).
Currently they are autogenerated based on propTypes. Everything complex (basically not `string` or `bool`) is just type variable.
🚧 It is not completed, we are adding bindings as we go. Doesn't follow semver at this point. 🚧

# Install, [npm](https://www.npmjs.com/package/@ahrefs/bs-reactstrap)

```
yarn add @ahrefs/bs-reactstrap
```

# Setup

Add `@ahrefs/bs-reactstrap` to `bs-dependencies` in your `bsconfig.json`!

```js
{
  /* ... */
  "bs-dependencies": [
    "@ahrefs/bs-reactstrap"
  ],
  /* ... */
}
```

# Usage Example

```reason
open BsReactstrap;

let component = ReasonReact.statelessComponent("SomeComponent");

let make = (~onClick, _children) => {
  ...component,

  render: _self => {
    <Button color="primary" size="lg" onClick> "Hello" </Button>;
  },
};
```

Check [Reactstrap documentation](https://reactstrap.github.io/components/) for available props.
