#!/bin/sh

cat /etc/passwd | grep -o '^[^#]*' | cut -d'*' -f1 | sed -n 'n;p' | rev | sort -dr | sed -n $FT_LINE1,$FT_LINE2'p' | tr '\n:' ', ' | cut -c 2- | sed 's/.$/./' | tr -d "\n"
