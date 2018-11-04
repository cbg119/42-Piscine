#!/bin/sh
cat $1 | grep -i ^Nicolas | grep -i bauer | grep -o "(\d\d\d)\d\d\d-\d\d\d\d"
