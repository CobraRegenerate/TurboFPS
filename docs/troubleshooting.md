# Troubleshooting Guide

Solutions for common TurboFPS problems.

## Installation Issues

### "Windows protected your PC" (SmartScreen)
TurboFPS is distributed as a portable binary, so SmartScreen may warn on first run.
```
1. Click "More info"
2. Click "Run anyway"
```
Verify the SHA-256 checksum against the value published in the release notes to confirm authenticity.

### "Access denied" when launching
TurboFPS requires administrator rights.
```
1. Right-click TurboFPS.exe
2. Select "Run as administrator"
3. Confirm the UAC prompt
```
If UAC is disabled: Control Panel в†’ User Accounts в†’ Change User Account Control settings в†’ set to default в†’ reboot.

### The archive won't extract
- Re-download from the official link (corrupted download is the most common cause)
- Check free disk space (need at least 10 MB)
- Try 7-Zip or WinRAR instead of built-in Windows extractor
- Verify the SHA-256 checksum matches the release notes

## Launch Issues

### TurboFPS opens and immediately closes
1. Run from a console to see the error:
```
cd C:\TurboFPS
.\TurboFPS.exe --console
```
2. Check the log at `%APPDATA%\TurboFPS\logs\`
3. Common causes:
   - Missing Visual C++ Redistributable 2015-2022 в†’ [download from Microsoft](https://aka.ms/vs/17/release/vc_redist.x64.exe)
   - Antivirus quarantined a module в†’ restore and add an exclusion

### "This app can't run on your PC"
- You downloaded the wrong architecture вЂ” TurboFPS is 64-bit only (x64)
- Your Windows build is older than 1803 в†’ run `winver` to check, update Windows

### Stuck on "Scanning for games..."
1. Click **Refresh** (F5)
2. If stuck longer than 2 minutes, kill the process and relaunch
3. Check Windows Defender isn't blocking WMI queries:
   - Windows Security в†’ Virus & threat protection в†’ Exclusions в†’ add `C:\TurboFPS`

## Antivirus Issues

### Antivirus flags TurboFPS
TurboFPS performs actions that look similar to PUPs (process termination, registry edits), so heuristic engines occasionally flag it.

| Antivirus | Status | Action |
|-----------|--------|--------|
| Windows Defender | Usually clean | Add exclusion if flagged |
| Kaspersky | Usually clean | Add to trusted |
| ESET | Occasional flag | Add exclusion |
| Avast/AVG | Occasional flag | Add exclusion |
| Norton | Occasional flag | Restore from quarantine |

How to verify it's a false positive:
1. Compare the SHA-256 of your file with the checksum in the release notes
2. Upload the file to [VirusTotal](https://www.virustotal.com) вЂ” check which engines flag it
3. The code is open source вЂ” build it yourself from `src/` if in doubt

To add a Windows Defender exclusion:
```
1. Windows Security в†’ Virus & threat protection
2. Manage settings в†’ Exclusions в†’ Add an exclusion
3. Select Folder в†’ C:\TurboFPS
```

## Optimization Issues

### FPS didn't improve
1. **Check the bottleneck:**
   - GPU-bound game (high GPU usage, low CPU) в†’ optimizations have limited effect; lower in-game settings
   - CPU-bound game (low GPU usage) в†’ TurboFPS helps most here
2. **Keep TurboFPS running** during gameplay вЂ” some optimizations (memory management) are active-only
3. Use **Aggressive** optimization level in the Optimization Panel
4. Close streaming/Discord manually if process killer skipped them

### My settings reset after reboot
This is expected behavior if "Revert on exit" is enabled in Settings в†’ Optimization. Disable it to keep optimizations persistent.

### A disabled service won't re-enable
1. Open TurboFPS в†’ Dashboard в†’ **Revert**
2. Or manually:
```
1. Win+R в†’ services.msc
2. Find the service (e.g., SysMain)
3. Right-click в†’ Properties
4. Startup type: Automatic в†’ Start
```

### Games crash after optimization
1. Press `F6` (Revert all changes)
2. Restart the game
3. If stable, re-apply optimization with **Light** level
4. Report the profile in [GitHub Issues](https://github.com/CobraRegenerate/TurboFPS/issues) with your game name

## Overlay Issues

### FPS overlay doesn't show
1. Settings в†’ Notifications в†’ enable "Show FPS overlay"
2. Run TurboFPS **before** launching the game
3. Some games with anti-cheat block overlays (Valorant) вЂ” overlay is disabled automatically for these

### Overlay interferes with the game
- Reduce overlay refresh rate in Settings
- Disable the 1% Low / 0.1% Low stats
- Move overlay position: Settings в†’ Overlay в†’ Position

## Update Issues

### Update notification won't go away
Click the notification в†’ "Skip this version" to dismiss it permanently.

### New version won't start
1. Completely close the old version (check Task Manager for TurboFPS.exe)
2. Extract the new archive over the same folder
3. If it still fails, delete `%APPDATA%\TurboFPS\cache\` and relaunch

## Reporting Unlisted Problems

If your problem isn't covered:
1. Gather diagnostics: Help в†’ **Export Diagnostics** (creates a ZIP with logs, no personal data)
2. Open an issue with the [bug_report template](.github/ISSUE_TEMPLATE/bug_report.md)
3. Attach the diagnostics ZIP
4. Or ask in [issue tracker](https://github.com/CobraRegenerate/TurboFPS/issues)

Please do not paste full logs into the issue вЂ” attach the file instead.