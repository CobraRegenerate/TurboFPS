# User Guide

Complete documentation for using all TurboFPS features.

## Quick Start

### One-Button Boost
1. Launch TurboFPS as Administrator
2. Click **Quick Boost** on the main dashboard
3. Select your game from the list
4. Launch your game

Your system is now optimized.

## Interface Overview

### Dashboard
The main screen showing:
- **System Status** — CPU, RAM, GPU usage
- **Game List** — Detected games with optimization status
- **Quick Actions** — Shortcut buttons for common tasks

### Optimization Panel
Detailed view for each game:
- Optimization level (Light / Balanced / Aggressive)
- Individual toggles for each optimization type
- Memory before/after preview
- FPS estimate

## Optimization Types

### 1. Memory Cleaner
Frees up RAM before game launch.
```
How it works:
1. Identifies background processes consuming RAM
2. Offers to close non-essential processes
3. Clears standby memory list
4. Result: +5-15% available RAM
```

### 2. Background Process Killer
Disables bloatware stealing CPU cycles.
```
Common targets:
- Discord (when not in call)
- Spotify
- Chrome (excessive tabs)
- NVIDIA/AMD broadcast software
- Windows Search Indexer (temporary)
```

### 3. Registry Optimizer
Tweaks Windows settings for gaming.
```
Included optimizations:
- Game Mode enforcement
- High contrast disabled
- Transparency effects off
- Background apps restricted
- Power plan set to High Performance
```

### 4. Service Manager
Disables unnecessary Windows services.
```
Safe to disable:
- Windows Search (during gaming)
- SysMain (Superfetch replacement)
- DiagTrack (telemetry)
- WSearch
```

### 5. GPU Optimization
Applies graphics driver tweaks.
```
NVIDIA:
- Low latency mode = Ultra
- Power management = Prefer max performance
- Threaded optimization = On

AMD:
- Radeon Anti-Lag = On
- Boost = On
- Wait VBlank = Off
```

## Game Profiles

### Supported Games (50+)
| Category | Games |
|----------|-------|
| FPS | Valorant, CS2, Apex Legends, Overwatch 2, Call of Duty |
| Battle Royale | Fortnite, PUBG, Warzone, Frag Punk |
| RPG | Baldur's Gate 3, Elden Ring, Cyberpunk 2077, Dragon Age |
| MMO | World of Warcraft, Final Fantasy XIV, Lost Ark |
| Strategy | Age of Empires IV, StarCraft II |
| Simulation | Flight Simulator, Microsoft Flight Sim |

### Creating Custom Profiles
1. Click **Add Custom Game** in the Game List
2. Browse to the game's executable
3. Configure optimizations manually
4. Click **Save Profile**
5. Profile saved to `profiles/custom/`

## Hotkeys

| Hotkey | Action |
|--------|--------|
| `Ctrl+Shift+F1` | Quick Boost (global) |
| `Ctrl+Shift+F2` | Emergency Memory Clear |
| `F5` | Refresh game list |
| `F6` | Revert all changes |
| `Esc` | Close overlay / Cancel |

## Settings

### General
- **Start minimized** — Launch to system tray
- **Auto-start** — Run at Windows startup
- **Check for updates** — Automatic update notifications

### Optimization
- **Optimization level** — Default for new games
- **Confirm before changes** — Prompt before applying
- **Revert on exit** — Return to pre-optimization state

### Notifications
- **Show FPS overlay** — In-game FPS counter
- **Completion toast** — Notification when boost completes

## Reverting Changes

### Manual Revert
1. Go to Dashboard → **Revert**
2. Select which changes to undo
3. Click **Restore**

### Auto-Revert on Exit
Enable in Settings → Optimization → "Revert on exit"

### What Gets Reverted
- Registry changes (restored to previous values)
- Disabled services (re-enabled)
- Background processes (users can restart them)
- Power plan (restored to previous)

## Performance Tracking

### Before/After Stats
TurboFPS logs all optimizations with timestamps:
```
Location: %APPDATA%\TurboFPS\logs\
Format: optimization_YYYY-MM-DD.log
```

### FPS Overlay (Optional)
Enable in Settings → Notifications → "Show FPS overlay"
```
Display:
- Current FPS (top-left corner)
- 1% Low / 0.1% Low (below FPS)
- GPU usage (optional)
```

## Tips & Tricks

### Maximum Performance
1. Set optimization level to **Aggressive**
2. Enable all background process kills
3. Use **Quick Boost** before every session
4. Keep TurboFPS running in system tray

### For Streamers
1. Exclude OBS from process killer
2. Keep Discord if streaming audio
3. Use "Light" optimization level

### For Laptops
1. Plug in before optimizing
2. Set power plan to "Balanced" (not "High Performance" for battery)
3. Monitor temperatures with GPU overlay