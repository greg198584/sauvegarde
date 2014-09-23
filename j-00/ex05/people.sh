#!/bin/sh 

ldapsearch -xLLL objectClass=apple-user | grep "uid:" | cut -d : -f 2
exit 0

