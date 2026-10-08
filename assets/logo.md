# Logo — assets/logo.png

## Specs
- Size: 256x256 px
- Format: PNG with transparent background
- Theme: dark-friendly (must read well on #0d1117 GitHub dark background)
- Style: neon gaming aesthetic, flat with glow, no photo elements

## Concept
A neon shield with a built-in gear, pierced through by a lightning bolt.
The shield = protection/safety (reversible optimizations), the gear = tuning,
the bolt = speed/FPS. Color: electric cyan (#00d4ff) to violet (#7c3aed)
gradient stroke, dark navy fill (#111827) so it doesn't disappear on dark themes.

## Midjourney prompt
```
minimalist app icon, neon shield with gear emblem and lightning bolt,
electric cyan and violet gradient on dark background, flat vector style,
subtle outer glow, crisp edges, centered composition, game optimizer
logo, no text --v 6 --ar 1:1 --style raw
```
Post-process: remove the dark background in Photoshop (Select Subject →
refine mask → export PNG-24 with transparency), resize to 256x256.

## Photoshop (manual) route
1. New canvas 256x256, transparent background.
2. Custom Shape tool → shield shape, fill #111827.
3. Layer style → Stroke: 6 px, gradient cyan #00d4ff → violet #7c3aed.
4. Layer style → Outer Glow: #00d4ff, 40% opacity, 12 px.
5. Place a gear shape (from Windows Symbol shapes or an SVG) centered on the shield, fill #00d4ff.
6. Draw lightning bolt polygon across the gear, fill #ffffff with 90% opacity.
7. Export As → PNG, transparent.

## Usage
- README header (`<img src="assets/logo.png" width="64">` next to the title)
- Favicon for GitHub Pages
- Discord/Telegram community avatars
- Shortcut icon if a user pins the portable exe
