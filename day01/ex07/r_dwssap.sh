#!/bin/sh
cat /etc/passwd | grep --invert-match "^#" | sed -n "p;n" | cut -d : -f 1 | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./'
