#!/bin/bash
logo
ifconfig wlan0 down
macchanger -r wlan0 | grep "New MAC"
airmon-ng start wlan0
airmon-ng check kill


