#!/bin/bash
# DNS Zone transfer script for PWK

if [ -z "$1" ]; then 

	echo "[*] Simple Zone transfer script"
	echo "[*] Usage: $0 <domain name> "
	exit 0 
fi 

for ns in $(host -t ns $1| cut -d " " -f 4); do 
host -l megacorpone.com $ns | grep " has address"
done 
