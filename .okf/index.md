---
okf_version: "0.2"
---

# ext-qt

* [Binding surface](api/surface.md) - Classes, enums and functions bound so far, each one Qt call; C++ scopes as PHP namespaces.

# Architecture

* [Object model](architecture/object-model.md) - One PHP object per QObject, guarded by QPointer; PHP deletes what it created unless Qt owns it through a parent.
* [Signals](architecture/signals.md) - String-signature connect through a moc-free dynamic slot; argument marshalling; slot lifetime.
* [Errors and threads](architecture/errors-and-threads.md) - QtException for refusals; applications only on the main thread.

# Runbooks

* [Build, install, test](runbooks/build.md) - Debian installer on the Pi, Homebrew installer on the Mac, Pest, smoke, clean tree.
