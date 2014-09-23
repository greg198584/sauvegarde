#!/bin/sh 
groups $FT_USER | tr " " "," | tr -d "\n"
exit 0
