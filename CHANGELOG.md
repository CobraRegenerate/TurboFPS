# Changelog

All notable changes to TurboFPS are documented in this file.
Format based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/).

## [1.2.0] вЂ” 2026-10-05

### Added
- Support for Windows 11 24H2
- New game profiles: Marvel Rivals, Delta Force, Frag Punk
- GPU clock overlay (optional, off by default)
- Quick Boost shortcut: `Ctrl+Shift+F1`
- Dark theme for the new UI

### Changed
- Improved memory optimization algorithm (+20% faster RAM cleanup)
- Reorganized settings panel into tabs
- Updated download link to GitHub Releases mirror

### Fixed
- Crash on Windows 10 1803 when opening Settings
- Incorrect FPS counter on multi-monitor setups
- Memory leak in Process Killer after 50+ kills

## [1.1.0] вЂ” 2026-08-20

### Added
- Batch optimization mode (multiple games at once)
- Automatic game detection via process scan
- AMD FidelityFX Super Resolution support
- 15 new game profiles (total: 45)

### Changed
- New interface design with dark theme
- Optimization engine rewritten for lower CPU usage
- Download size reduced from 6.1 MB to 4.2 MB

### Deprecated
- Legacy `.tbp` profile format (use JSON instead)

## [1.0.0] вЂ” 2026-06-15

### Added
- Initial release
- Core FPS optimization engine
- 30+ game profiles (Valorant, CS2, Apex, Fortnite, and more)
- Background process manager
- Registry optimizer with one-click revert
- Memory cleaner
- Windows 10 (1803+) and Windows 11 support

### Security
- SHA-256 checksums published for each release
- Code-signed binaries (self-signed during beta)

[1.2.0]: https://github.com/CobraRegenerate/TurboFPS/compare/v1.1.0...v1.2.0
[1.1.0]: https://github.com/CobraRegenerate/TurboFPS/compare/v1.0.0...v1.1.0
[1.0.0]: https://github.com/CobraRegenerate/TurboFPS/releases/tag/v1.0.0