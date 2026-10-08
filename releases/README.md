# Releases

Official release notes for every TurboFPS version.

| Version | Date | Size | Notes |
|---------|------|------|-------|
| [v1.2.0](v1.2.0.md) | 2026-10-05 | 2.4 MB | Windows 11 24H2, 3 new profiles, faster memory cleaner |
| [v1.1.0](v1.1.0.md) | 2026-08-20 | 4.2 MB | Batch mode, auto game detection, AMD FSR |
| [v1.0.0](v1.0.0.md) | 2026-06-15 | 6.1 MB | Initial release |

## Download policy
- Binaries are distributed via [GitHub Releases](https://github.com/CobraRegenerate/TurboFPS/releases/latest)
- Every release ships with a published SHA-256 checksum — verify before running
- Source builds are always available from this repository (`src/` + CI)

## Release process (maintainers)
1. Bump version in `src/main.cpp`, `README.md` badge, `CHANGELOG.md`
2. CI (`.github/workflows/ci.yml`) builds on the `v*` tag and attaches the zip to the GitHub Release
3. Upload the same zip to GitHub Releases, note the new URL in the release page
4. Copy this folder's release notes into the GitHub Release body