#this is a basic server
import socket
import sys
import os
import webbrowser
import cgi
import cgitb


HOST = '' # Symbolic name, meaning all available interfaces
PORT = 9000 # arbitrary non-privilege port 

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
print 'socket created'

#bind socket
try:
	s.bind((HOST, PORT))
except socket.error as msg:
	print 'Bind failed. Error Code : ' + str(msg[0]) + ' Message: ' + msg[1]
	sys.exit()
print 'Socket bind complete'

# Listen for response ten seconds before time out
s.listen(10)
print 'Socket listening on port: ' + str(PORT)

#talk to client
while (1):
	#wait for response 
	conn, addr = s.accept()
	print 'Client listening on: ' + addr[0] + ':' + str(addr[1])
s.close()

def browseLocal(webPageText, filename = 'page.html'):

