---
okf_version: "0.2"
---

# qt — knowledge bundle

Faithful 1:1 Zephir binding of Qt 6 into PHP. Read this index first, then open only the concepts the task needs.

- [binding-rules.md](/binding-rules.md) — the spec every class binding follows (types, naming, overloads, reserved members, the one-call rule, the AST audit).
- [bridge.md](/bridge.md) — the only glue: handle registry, pump, connect/disconnect, override, event filter. (written in Task 15)
- [toolchain.md](/toolchain.md) — harvest → gen-src → gen-zep → parity → prepare → Mac check → Pi build. (written in Task 15)
