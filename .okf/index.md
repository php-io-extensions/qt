---
okf_version: "0.2"
---

# ext-qt

* [Binding surface](api/surface.md) - Classes, enums and functions bound so far, each one Qt call under its native name and signature; C++ scopes as PHP namespaces; value classes as PHP value objects.
* [Layout and geometry](api/layout.md) - Qt owns geometry; PHP installs layouts, adds widgets with stretch and alignment, reads sizes back as QSize, QPoint and QRect.
* [Video](api/video.md) - QMediaPlayer + QAudioOutput + QVideoWidget over the platform backend; status and error signals; Multimedia build requirement.

# Architecture

* [Object model](architecture/object-model.md) - One PHP object per QObject, guarded by QPointer; PHP deletes what it created unless Qt owns it through a parent. Qt's value classes as owned heap copies; borrowed items and buffers.
* [Signals](architecture/signals.md) - String-signature connect through a moc-free dynamic slot; argument marshalling both ways; the event filter, image cleanup and slot lifetime.
* [Errors and threads](architecture/errors-and-threads.md) - Qt answers for itself; the kept refusals, their sites and probes; macOS-only thread and second-application checks.

# Runbooks

* [Build, install, test](runbooks/build.md) - Debian installer on the Pi, Homebrew installer on the Mac, Pest, smoke, clean tree.
* [Adding a binding](runbooks/adding-a-binding.md) - Stub, gen_stub, one .cpp per header group, config.m4 source list, PHPQT_THIS, ownership, surface test.
* [Generating enums](runbooks/generating-enums.md) - scripts/gen-enum.php turns a Qt header enum into stub cases plus one static_assert per case.
