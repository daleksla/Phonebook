def connectionTest():
	import socket
	try:
		# connect to the host -- tells us if the host is actually
		# reachable
		socket.create_connection(("1.1.1.1", 53))
		return True
	except OSError:
		pass
	return False

def getConnectionStatus():
	f = open("container.txt", "w")
	f.write((str(connectionTest())).lower())
	f.close()