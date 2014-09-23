#!/bin/sh 

ls -l | awk "NR % 2"
exit 0

