#!/bin/sh
find ./ -type f -name "*.sh" -print | sed 's/^.*\///' | sed "s/.\{3\}$//"
