Put the internal image here as:

    payload.clean.dll

It is 60,192,400 bytes. It is shipped as a GitHub Release asset, not as a
commit, because a 60 MB binary does not belong in git history.

Download it from the Releases page of this repository, or from wherever the
release was mirrored, and drop it in this folder. Then run:

    pwsh -File build.ps1

That produces work\payload.stripped.dll with the six licence gates removed. The
original file is never modified.
