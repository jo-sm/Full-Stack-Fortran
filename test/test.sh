#!/bin/bash

cd "${0%/*}/../tools"
DNAME=`readlink -f ../test`
docker-compose run --rm -v $DNAME:/project wasmchain bash -c 'source /app/emsdk/emsdk_env.sh && cd /project && make build'
docker run --name testserver -p 8080:3000 -v $DNAME/bin:/app/public:ro -d tobilg/mini-webserver