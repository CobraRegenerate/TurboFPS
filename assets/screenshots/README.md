# Screenshots — assets/screenshots/

Three images, 1280x720 px each, PNG. These sell the product — they must look
like a real, polished desktop app, not a wireframe.

Build the UI mock in Figma (recommended: free, dark-UI components) or
PowerPoint → export → crop. Keep one consistent UI style across all three:
dark theme #0d1117, panels #161b22, borders #30363d, accent cyan #00d4ff,
font Segoe UI / Inter.

---

## 1. dashboard.png — Main Dashboard

What must be visible:
- Left sidebar (200 px): app logo + name "TurboFPS", nav items:
  Dashboard (active, cyan highlight), Optimization, Profiles, Settings.
- Top bar: system stats as three cards — CPU 12% / RAM 9.4 of 16 GB /
  GPU idle, each with a small sparkline.
- Center: game list table — columns Game / Profile / Status / Last boost.
  6 rows with real titles: Valorant (Optimized, green dot), CS2 (Optimized),
  Fortnite (Ready), Elden Ring (Ready), Apex Legends (Not detected, gray),
  Cyberpunk 2077 (Ready).
- Bottom-right: big cyan button **⚡ QUICK BOOST**.
- Bottom-left status line: "System baseline: 142 FPS in CS2 (benchmark 08.10.2026)".

## 2. settings.png — Optimization Panel
- Same shell as dashboard, but the Optimization page.
- Toggle list with labels and short descriptions:
  - Memory Cleaner [ON]
  - Background Process Killer [ON]
  - Registry Optimizer [ON]
  - Service Manager [OFF] — grayed with tooltip "Advanced"
  - GPU Optimization [ON]
- Optimization level segmented control: Light | **Balanced** (selected) | Aggressive.
- Right column: "Estimated impact" card — "+18-30% FPS typical for your hardware",
  RAM to free "3.2 GB".
- Bottom: cyan **Apply** button and ghost **Revert all** button.

## 3. results.png — Before/After Result
- Post-optimization report screen.
- Two large numbers side by side: "96 FPS → 138 FPS" with a green "+44%" badge.
- Horizontal bar chart comparing Before vs After per metric:
  Available RAM 5.8 → 9.0 GB, Background processes 87 → 41,
  CPU load in menu 23% → 9%.
- Header: "CS2 — Benchmark complete • Benchmarke was run at 1920x1080, High preset".
- Green check icon top-right: "All changes reversible — one click".

---

## Production checklist (per image)
- [ ] 1280x720, PNG, under 500 KB (use TinyPNG before commit)
- [ ] Dark theme consistent with #0d1117
- [ ] No real usernames/paths (use "Player", "C:\Games\...")
- [ ] Text is crisp — export at 2x and downscale, don't stretch screenshots
- [ ] File names match README links: dashboard.png, settings.png, results.png
