#!/bin/bash

logo
airmon-ng stop wlan0mon
service NetworkManager restart
