#!/bin/sh 

find . -type f -o -type d | wc -l | cat -e
exit 0

