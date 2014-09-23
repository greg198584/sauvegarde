#!/bin/sh	

ifconfig -a | grep "ether" | cut -d r -f 2
exit 0

