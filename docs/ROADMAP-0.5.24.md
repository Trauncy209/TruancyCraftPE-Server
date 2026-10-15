# Next goal: TCPE 0.5.24 — 4jcraft weather fidelity

Inspect https://github.com/Moxie-Archive/4jcraft/tree/dev and pin the exact reference commit (dev was `529a366ad52a9b66a2ca887647a9abdd9500a0fc` when recorded). Inspect licenses and asset provenance before reusing source/assets. Inventory the complete weather behavior in that implementation; do not assume vanilla weather is equivalent.

Implement its weather system in native TCPE server and game, with server-owned simulation, console-granted operator control, synchronized client rendering/audio, saved weather state, late-join/reconnect behavior and mobile performance. Preserve existing singleplayer, native TCPE multiplayer and Java networking behavior. Keep world administration default-deny; only local console can grant/revoke operators.

Create an evidence-based fidelity checklist covering all behavior found in the reference, timings/transitions, visuals, particles, sound, world/light interactions and edge cases. Verify Linux and Android builds and multiple clients. Do not claim 1:1 fidelity without comparison evidence; explicitly list unsupported behavior.

Then bump game, Android metadata/in-game version and server to 0.5.24. Produce correctly named signed Android 32/64-bit and Linux builds, update source and documentation in the established voice, and prepare release notes. Publishing v0.5.24 requires explicit release authorization; this request authorizes implementation and version bump, not publication.

Finish the currently requested operator restrictions and GitHub README/server repository update first.
