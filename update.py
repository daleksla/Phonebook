def updateStatementPersons():
	import sqlite3
	f = open("container.txt", "r")
	
	columnName = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			columnName += i
	columnName = str(columnName)
	
	data = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			data += i
	data = str(data)
	
	ID = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			ID += i	
	ID = str(ID)
	
	f.close()
	sqliteConnection = sqlite3.connect("Surveillance.sqlite")
	cursor = sqliteConnection.cursor()
	#query = "UPDATE Persons SET " + columnName + " = ? WHERE ID = ?"
	cursor.execute("UPDATE Persons SET " + str(columnName) + " = ? WHERE ID = ?", (data, ID))
	sqliteConnection.commit()
	sqliteConnection.close()
	
def updateStatementOrganisations():
	import sqlite3
	f = open("container.txt", "r")
	
	columnName = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			columnName += i
	columnName = str(columnName)
			
	data = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			data += i
	data = str(data)
	
	ID = ""
	meow = f.readline()
	for i in meow:
		if i == ' ':
			break
		else:
			ID += i	
	ID = str(data)
	f.close()
	
	sqliteConnection = sqlite3.connect("Surveillance.sqlite")
	cursor = sqliteConnection.cursor()
	#query = "UPDATE Persons SET " + columnName + " = ? WHERE ID = ?"
	cursor.execute("UPDATE Organisations SET " + str(columnName) + " = ? WHERE ID = ?", (data, ID))
	sqliteConnection.commit()
	sqliteConnection.close()
	
def wipeFile():
	open("container.txt", "w").close()