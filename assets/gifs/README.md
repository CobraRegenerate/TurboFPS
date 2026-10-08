# Demo GIF — assets/gifs/demo.gif

## Specs
- Size: 1280x720 (or 960x540 to save weight)
- Length: 6-8 seconds, 15 fps → ~1.5-2.5 MB
- Format: GIF (optimized with [gifsicle](https://github.com/kohler/gifsicle) `--lossy=80 -O3`)

## Script (what the viewer sees, second by second)

| Time | Frame |
|------|-------|
| 0:00-0:01 | Dashboard opens. Mouse moves to the game list, hovers "CS2". |
| 0:01-0:02 | Clicks **⚡ QUICK BOOST**. Button ripples, progress bar starts. |
| 0:02-0:04 | Progress bar fills with log lines: "Freeing 3.2 GB RAM…", "Disabling 14 background processes…", "Applying GPU profile…". |
| 0:04-0:05 | Green check "Optimization complete". Counter animates: 96 FPS → 138 FPS, "+44%" badge pops. |
| 0:05-0:07 | Cut to fullscreen game footage (CS2 pistol round) with FPS counter in the corner climbing to ~140. |
| 0:07-0:08 | End card: logo + "TurboFPS — Free FPS Booster. Link in README." (1.5 s, readable). |

## How to record
1. Build the UI mock screens from `assets/screenshots/README.md` (Figma).
2. Screen-record the fake flow with [OBS Studio](https://obsproject.com)
   at 30 fps, then slow to 15 fps in the export for smaller size — or record
   at 15 fps directly (Display capture, 1280x720, MP4).
3. Trim to 6-8 s in Shotcut / DaVinci Resolve.
4. Convert: `ffmpeg -i demo.mp4 -vf "fps=15,scale=1280:-1:flags=lanczos" -loop 0 demo.gif`
5. Optimize: `gifsicle -O3 --lossy=80 -o demo.gif demo.gif`

## Alternative: scripted screen capture
If the real app exists, record the actual flow with the same script above —
real footage always outsells a mock. Keep the 6-8 s limit; the first two
seconds must show the Quick Boost click, that's the hook.

## Checklist
- [ ] Starts with the click, no dead intro frames
- [ ] FPS counter legible at 50% zoom
- [ ] Under 2.5 MB (GitHub renders GIFs inline only under 10 MB, but light = fast README)
- [ ] No personal info, no desktop icons visible (use a clean test VM or hide icons)
- [ ] Loops cleanly — last frame flows into the first
