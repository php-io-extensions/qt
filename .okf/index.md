---
okf_version: "0.2"
---

# ext-qt

* [Binding surface](api/surface.md) - Classes, enums and functions bound so far, each one Qt call; C++ scopes as PHP namespaces.
* [Layout and geometry](api/layout.md) - Qt owns geometry; PHP installs layouts, adds widgets with stretch and alignment, reads sizes back as arrays.
* [Video](api/video.md) - QMediaPlayer + QAudioOutput + QVideoWidget over the platform backend; status and error signals; Multimedia build requirement.

# Architecture

* [Object model](architecture/object-model.md) - One PHP object per QObject, guarded by QPointer; PHP deletes what it created unless Qt owns it through a parent. Values (QFont, QPixmap, QUrl, QTableWidgetItem) as owned heap copies.
* [Signals](architecture/signals.md) - String-signature connect through a moc-free dynamic slot; argument marshalling; slot lifetime.
* [Errors and threads](architecture/errors-and-threads.md) - QtException for refusals; applications only on the main thread.

# Runbooks

* [Build, install, test](runbooks/build.md) - Debian installer on the Pi, Homebrew installer on the Mac, Pest, smoke, clean tree.
* [Adding a binding](runbooks/adding-a-binding.md) - Stub, gen_stub, one .cpp per header group, config.m4 source list, PHPQT_THIS, ownership, surface test.
* [Generating enums](runbooks/generating-enums.md) - scripts/gen-enum.php turns a Qt header enum into stub cases plus one static_assert per case.
