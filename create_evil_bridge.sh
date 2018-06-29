#!/bin/bash

brctl addbr evil
brctl addif evil eth0
brctl addif evil at0
ifconfig at0 0.0.0.0 up
ifconfig evil up
dhclient evil &