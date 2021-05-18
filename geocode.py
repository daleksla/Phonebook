def convertA2C():
	import time
	import requests, json
	URL = "http://photon.komoot.de/api/?q="
# 	address = "16 Greenland Road, Selly Park, Birmingham, B297PP"
	file = open("container.txt", "r")
	address = file.readline()
	file.close()
	
	if ";" in address:
		return 
	
	URL = URL + address
	resp = requests.get(URL)
	data = json.loads(resp.text)
	stuff = data['features'][0]['geometry']['coordinates']
	latitude = str(stuff[1])
	longitude = str(stuff[0])
	
	open("container.txt", "w").close()
	f = open("container.txt", "a")
	f.write(latitude + ";" + longitude)
	f.close()
# 	time.sleep(.05)

def convertC2A():
	import time
	import reverse_geocode as rg 
	file = open("container.txt", "r")
# 	google_key = "AIzaSyAhga--pb8JBMGs0zAdbIQtSiHAYNOLKE0"
	latitude = float(file.readline())
	longitude = float(file.readline())
	file.close()
	result = rg.search([(latitude, longitude)]) 
	city = result[0]["city"]
	country =result[0]["country"]
	
	f = open("container.txt", "w")
	f.write(city)
	f.write("\n")
	f.write(country)
	f.close()
# 	time.sleep(.05)

def reverseGeocode(coordinates): 
	import reverse_geocode as rg 
	import pprint 
	result = rg.search(coordinates) 
	# result is a list containing ordered dictionary. 
	pprint.pprint(result)  
	
if __name__ == '__main__':
	reverseGeocode([(52.565000,-1.816480)])