import sys
import socket
from datetime import datetime

#Defining our target
if len(sys.argv) == 2:
    target = socket.gethostbyname(sys.argv[1]) #Translating hostname to IPv4
else:
    print("Arguments Amount are Invalid")
    print("Syntax: python3 PortScanner.py <ip>")

#Pretty banner
print("-" * 50)
print("Scanning target " + target)
print("Time Started: "+str(datetime.now()))
print("-" * 50)

try:
    for port in range(50,85):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        socket.setdefaulttimeout(3)
        result = s.connect_ex((target,port)) #returns an error indicator
        if result == 0:
            print("This port is Open".format(port))
            s.close()

except KeyboardInterrupt:
    print("\nExiting Program.")
    sys.exit()

except socket.gaierror:
    print("Hostname could not be resolved")
    sys.exit()

except socket.error:
    print("Couldn't connect to server")
    sys.exit()