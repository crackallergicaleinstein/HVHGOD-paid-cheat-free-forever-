The internal image lives here as:

    payload.clean.dll

It is 60,192,400 bytes and it is committed to this repo, so a fresh clone
already has the cheat in it. No release hunt, no download link, no "ask the
vendor nicely". Clone and build, that is the whole ritual.

    pwsh -File build.ps1

That produces work\payload.stripped.dll with the six licence gates removed. The
original file is never modified.
