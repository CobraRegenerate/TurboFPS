# Installation Guide

Complete step-by-step instructions for installing TurboFPS on Windows 10 and Windows 11.

## System Requirements

| Requirement | Minimum | Recommended |
|------------|---------|-------------|
| OS | Windows 10 v1803 | Windows 11 23H2 |
| RAM | 4 GB | 8 GB |
| Storage | 10 MB free | 50 MB free |
| Rights | Administrator | Administrator |

## Download

### Option 1: GitHub Releases (Recommended)
1. Go to the [Releases page](https://github.com/CobraRegenerate/TurboFPS/releases)
2. Download `TurboFPS-v1.2.0-windows.zip`
3. Verify SHA-256 checksum (optional but recommended)

### Option 2: GitHub Releases Mirror
**Download:** [TurboFPS v1.2.0 on GitHub Releases](https://github.com/CobraRegenerate/TurboFPS/releases/latest)
- File size: 2.4 MB
- No installation required
- Portable — run from any location

## Installation Steps

### Step 1: Extract the Archive
```
1. Right-click the downloaded ZIP file
2. Select "Extract All..."
3. Choose destination (e.g., C:\TurboFPS)
4. Click "Extract"
```

**Location recommendation:** `C:\TurboFPS` or any location without spaces.

### Step 2: Run as Administrator
```
1. Navigate to the extracted folder
2. Right-click TurboFPS.exe
3. Select "Run as administrator"
```

> ⚠️ **Important:** TurboFPS requires administrator privileges to optimize registry settings and manage system services.

### Step 3: Verify Installation
After launching, you should see:
- Dashboard with your current system stats
- List of detected games
- Optimization status indicator

## First Run Setup

On first launch, TurboFPS will:
1. Scan for installed games (30-60 seconds)
2. Run a quick system benchmark
3. Display your current performance baseline

## Updating

### Manual Update
1. Download the new version from GitHub or GitHub Releases
2. Close TurboFPS completely
3. Extract to the same folder (overwrite existing files)
4. Run as administrator

### Auto-Update
- v1.1+ includes automatic update checks
- Notification appears when new version is available
- Download link included in notification

## Uninstallation

TurboFPS does not install anything to your system. To remove:
```
1. Close TurboFPS completely
2. Delete the TurboFPS folder
3. (Optional) Clear the log folder at %APPDATA%\TurboFPS
```

## Troubleshooting Installation

| Problem | Solution |
|---------|----------|
| "Windows protected your PC" | Click "More info" → "Run anyway" |
| Access denied | Right-click → Run as administrator |
| Not detecting games | Click "Refresh" in the Dashboard |
| Old version still running | Kill process in Task Manager, then restart |

## Screenshots

*Dashboard after first launch*
![First Run](assets/screenshots/first-run.png)

*Game detection results*
![Game Detection](assets/screenshots/game-detection.png)