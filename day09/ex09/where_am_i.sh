#!/bin/sh
ip_command=$(ifconfig | grep "inet " | grep -v 127.0.0.1 | cut -d \  -f 2)
if [ ip_command == "" ]; then
	echo "I am lost!\n"
else
	echo $ip_command
fi
