# Frequently Asked Questions

Common questions about TurboFPS answered.

## General

### What is TurboFPS?
TurboFPS is a free, open-source Windows optimization tool designed to maximize gaming performance by cleaning up RAM, disabling background processes, optimizing registry settings, managing services, and tweaking GPU driver settings.

### Is TurboFPS free?
Yes, 100% free. No premium version, no ads, no data collection. Open source under MIT License.

### What does FPS boost actually mean?
TurboFPS optimizes your system resources. Typical results:
- **Low-end PCs:** 15-40% more FPS
- **Mid-range PCs:** 10-25% more FPS
- **High-end PCs:** 5-15% more FPS

Results depend on the bottleneck:
| Bottleneck | Improvement |
|------------|-------------|
| RAM shortage | Significant (60%+ in some games) |
| CPU background | Moderate (15-30%) |
| Registry bloat | Minor to moderate (5-15%) |

### Is it safe?
Yes. All optimizations are reversible, use only well-documented Windows tweaks, and involve no risky overclocking or hardware modifications.

TurboFPS never overclocks CPU/GPU, modifies game files, installs drivers, or sends data anywhere.

### Will it damage my system?
No. TurboFPS only makes software-level reversible changes: registry values, service states, and process states.

### Does it work with antivirus?
Most antiviruses don't flag TurboFPS. Some aggressive AV may show a warning - this is a false positive since the code is open source. Add an exception if needed in Settings.

### Will it affect other applications?
Slightly. Some background apps will be closed: Discord (when not in call), Spotify, Chrome (optional), and broadcast overlays. These restart automatically when done gaming.

## Compatibility

### Which Windows versions?
- Windows 10 version 1803 and later
- Windows 11 all versions including 24H2

### Which games?
50+ games have optimized profiles: Valorant, CS2, Apex Legends, Fortnite, Call of Duty, Overwatch 2, PUBG, Baldur's Gate 3, Elden Ring, Cyberpunk 2077, World of Warcraft, Final Fantasy XIV, and more.

Games without dedicated profiles still benefit from general optimizations.

### Does it work with EasyAntiCheat or BattlEye?
Yes. TurboFPS only modifies system settings, not game files. Anti-cheat systems cannot detect it.

### Does it work with Vanguard (Valorant)?
Yes. Vanguard-compatible. No game files are modified.

## Technical

### Does it work on laptops?
Yes, with notes: plug in for best results, use Balanced optimization for battery life, and monitor temperatures with GPU overlay.

### Does it work with multiple or ultrawide monitors?
Yes. No known issues with multi-monitor or ultrawide setups.

### How much RAM does TurboFPS use?
Under 30MB RAM while running, near-zero CPU when idle.

## Support

### The tool does not detect my game
1. Click Refresh in the game list
2. Click Add Game Manually and browse to the .exe
3. Create a custom profile

### My FPS did not improve
Possible reasons:
- GPU is the bottleneck (optimizations help CPU/RAM)
- Game is CPU-bound (e.g., Cities Skylines)
- Background processes are restarting - keep TurboFPS running during gameplay

### How do I uninstall?
1. Close TurboFPS
2. Click Revert All Changes (optional but recommended)
3. Delete the TurboFPS folder
4. Done - nothing else to uninstall

### Where do I report bugs?
- GitHub Issues: https://github.com/CobraRegenerate/TurboFPS/issues
- Bug tracker: https://github.com/CobraRegenerate/TurboFPS/issues

### How can I support the project?
- Star the GitHub repo
- Report bugs
- Suggest features


## Myths Debunked

### Registry cleaners are dangerous
Only true for poorly-written tools. TurboFPS backs up every registry change, never deletes keys (only modifies values), and provides one-click rollback.

### You need to defrag for gaming
False. Modern games use random access, not sequential. Defrag is irrelevant for gaming performance.

### More FPS always equals better experience
Not always. On a 60Hz monitor, 200 FPS looks the same as 60 FPS. Use VSync or G-Sync plus FreeSync for smooth, tear-free gameplay.