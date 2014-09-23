#!/bin/sh 

find . -name "*.sh" -exec basename {} \; | cut -d . -f 1
exit 0

