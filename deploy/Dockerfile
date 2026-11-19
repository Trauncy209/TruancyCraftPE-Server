# Build from the extracted Linux server release directory containing tcpe-server.
FROM ubuntu@sha256:fe81560990fae86dc4743202b2cb4d3df98d0bcf949173cecef15ce1127ef852
COPY --chmod=755 tcpe-server /usr/local/bin/tcpe-server
RUN mkdir -p /data && chown 10001:10001 /data
USER 10001:10001
WORKDIR /data
STOPSIGNAL SIGTERM
EXPOSE 25565/tcp 25565/udp
HEALTHCHECK --interval=15s --timeout=3s --start-period=90s --retries=4 CMD bash -c 'exec 3<>/dev/tcp/127.0.0.1/25565'
ENTRYPOINT ["/usr/local/bin/tcpe-server"]
CMD ["--port","25565","--directory","/data","--world","world","--name","Native TruancyCraftPE survival","--survival","--max-players","16","--autosave","60","--console","/data/console.in"]
