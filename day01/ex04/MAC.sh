#!/bin/sh
ifconfig | grep "ether *" | cut -c8- | tr -d " " | grep "^\d"
