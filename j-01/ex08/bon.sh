#!/bin/sh 

ldapsearch -Q | grep -i 'last-name: .*bon.*' | wc -l | tr -d ' '
exit 0

