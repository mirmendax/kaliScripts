#!/bin/bash
logo
service tor stop -V
service privoxy stop

echo "Set proxy is Off and restart bash"
