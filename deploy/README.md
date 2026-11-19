# Docker

Extract the Linux server release, place its `tcpe-server` executable beside this repository's `deploy/` folder, then run:

```sh
docker compose -f deploy/compose.yaml up -d --build
docker compose -f deploy/compose.yaml logs -f
```

Gameplay and server listings both use port **25565**, over UDP and TCP respectively. The named `tcpe-data` volume holds worlds, players, settings and the console FIFO. Keep that same volume when updating the executable; stopping the container saves cleanly. `restart: unless-stopped` starts it again after Docker/host restarts unless you deliberately stopped it.

For an existing installation, replace the volume entry with your existing world directory mounted at `/data`, keep the same `--world` folder name in the Dockerfile command, and give UID/GID **10001** write access. Stop the old server and back up the whole directory before starting the container. Put `server-icon.png` in the data directory. Adjust the Dockerfile command to change the name, player limit or autosave interval.

The image uses the release executable and a pinned Ubuntu 24.04 base. It runs without root privileges, keeps data outside its read-only filesystem, rotates logs and checks that the listing port is listening. Full native login and world-restart tests remain separate from that lightweight health check.
