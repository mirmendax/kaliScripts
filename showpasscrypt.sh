#!/bin/bash

logo
echo 'Clone crypted pass "dump_clone.gpg"'
cp /etc/passdump/dump.gpg /etc/passdump/dump_clone.gpg
echo 'Pass Decrypt'
gpg --textmode -d -o /etc/passdump/temppass /etc/passdump/dump.gpg
echo 'Pass Decrypted'
rm /etc/passdump/dump.gpg
echo 'Show Pass'
mcedit /etc/passdump/temppass
mv /etc/passdump/temppass /etc/passdump/dump
gpg -e -r Mendax /etc/passdump/dump 
rm /etc/passdump/dump
echo 'Pass Encrypted'
