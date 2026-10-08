# Banner — assets/banner.png

## Specs
- Size: 1280x640 px (2:1, renders crisp on GitHub README at 100% width)
- Format: PNG (or JPG under 300 KB if using a photo-composite)
- Base background: #0d1117 (GitHub dark canvas, so it blends seamlessly with the README)

## Layout (from top to bottom)
1. **Background:** #0d1117 base with a subtle diagonal grid or circuit-board
   texture at 8% opacity, plus a radial glow centered slightly left of middle
   in cyan #00d4ff fading to transparent.
2. **Left side (~55% width):** product name "TurboFPS" in a heavy geometric
   sans (Exo 2 / Rajdhani / Orbitron Bold), 140 px, white #f0f6fc with a
   cyan→violet gradient applied to "FPS". Below it the tagline in 36 px
   #8b949e: "Free FPS Booster for Windows".
3. **Right side (~45%):** three floating feature icons with soft glow —
   lightning bolt (speed), RAM chip (memory), gauge (FPS counter) — arranged
   in a loose triangle, each 120 px, connected by thin #21262d circuit lines.
4. **Bottom strip:** version pill "v1.2.0 • Windows 10/11 • Free" in a
   rounded rectangle, border #30363d, text #58a6ff.
5. Optional: faint FPS counter graphic ("240 FPS") as background texture
   behind the text at 15% opacity.

## Midjourney prompt
```
dark tech banner design, deep charcoal background #0d1117, neon cyan and
violet gradient accents, glowing lightning bolt RAM chip and speedometer
icons floating, circuit board pattern, gaming performance aesthetic,
wide composition with empty space on left for text --v 6 --ar 2:1 --style raw
```
Add the text in Photoshop/Figma afterward — AI renders of text are unreliable.

## Figma/Photoshop (manual) route
1. Canvas 1280x640, fill #0d1117.
2. Add noise/grid texture layer, blend mode Overlay, 8% opacity.
3. Radial gradient layer: center-left, #00d4ff 20% → transparent.
4. Type tool: "TurboFPS" in Rajdhani Bold 140 px; apply gradient overlay to the "FPS" portion.
5. Tagline below at 36 px, #8b949e.
6. Import three line-style icons (lucide: zap, cpu, gauge), 120 px, stroke #00d4ff, outer glow 15 px.
7. Bottom-center rounded pill: 8 px radius, stroke #30363d, text 28 px #58a6ff.
8. Export As → PNG.

## Usage
- README header, full width: `<img src="assets/banner.png" alt="TurboFPS" width="100%"/>`
- Social preview image (Settings → Social preview on GitHub)
- Discord server banner, Telegram channel cover
