#!/bin/bash 
# DNS forward lookup script for PWK course 


for subdomain in $(cat list.txt); do 
host $subdomain.megacorpone.com | grep "has address"| cut -d " " -f 1,4
done 
