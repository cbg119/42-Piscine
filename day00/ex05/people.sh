#!/bin/sh
ldapsearch -LLL "(cn=z*)" | grep "^cn: *" | cut -c5- | sort --ignore-case -r
