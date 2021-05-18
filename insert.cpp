/* This client file stores the implementation for all database insertion functions */

#include "insert.hpp"
#include "data.hpp"
#include "occupation.hpp"
#include "organisation.hpp"
#include "person.hpp"
#include "/usr/include/python2.7/Python.h"
#include <ctype.h>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <cctype>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <iterator>
#include <string>
using namespace std ;

#include "libsqlite.hpp"

void alternativeMain(vector<string>* value)
{
	clearScreen() ;
	Py_Initialize();
	PyRun_SimpleString("import sys; sys.path.append('.')");
	PyRun_SimpleString("import checkConnection;");
	PyRun_SimpleString("checkConnection.getConnectionStatus()") ;
	string result = getValuesTextFile()[0] ;
	/* Here we create objects mirroring records in the database */
	//get possible ID's
	vector<int> PersonIDs = getIDs("Persons") ;
	vector<int> OccupationIDs = getIDs("Occupations") ; //need to make class
	vector<int> OrganisationIDs = getIDs("Organisations") ; //need to make class
	
	//map IDs to relevant objects
	vector<Person> persons ;
	persons = *(getObjects(&PersonIDs, &persons)) ;
	
	vector<Occupation> occupations ;
	occupations = *(getObjects(&OccupationIDs, &occupations)) ;
	
	vector<Organisation> organisations ;
	organisations = *(getObjects(&OrganisationIDs, &organisations)) ;
	
	if((*value)[0] == "1")
	{
		modifyRecords(&persons, &organisations, &occupations, value) ;
	}
	else {
		cout << "insert;52" << endl ;
		displayAndExit(-1) ;
	}
}

void modifyRecords(vector<Person>* persons, vector<Organisation>* organisations, vector<Occupation>* occupations, vector<string>* value)
{
	if((*value)[0] == "0")
	{
		//ask & get table name
		string input = (*value)[1] ;
		insertRecord(&input, occupations, value) ;	
	}
	else if((*value)[0] == "1")
	{
		//get table name
		string input = (*value)[1] ;
		
		if(input != "Persons" && input != "Organisations")
		{
			cout << "insert;73" << endl ;
			displayAndExit(-1) ;
		}
		
		string input1 = input ;
		//get record using name/ID
		input = (*value)[2] ;

		Person* pointerToAnObject = NULL ;
		Organisation* pointerToObject = NULL ;
		if(input1 == "Persons")
		{
			char thing = input[0] ;
			if(!isdigit(thing))
			{
				if(pluralityCheck(persons, &input))
				//if there are, make user specify then ..../
				{
					auto fluff = getPlurals(persons, &(input)) ;
					auto stuff = distinguishObject(&fluff, input) ;
					cout << endl ;
					if(stuff.size() > 1)
					{
						displayAndExit(-2) ;
					}
					pointerToAnObject = &stuff[0] ;
				}
				else {
					pointerToAnObject = getPerson(persons, &(input)) ;
				}
			}
			else {
				pointerToAnObject = getPerson(persons, &(input)) ;
			}
			
			if(pointerToAnObject == NULL)
			{
				cout << "insert;109" << endl ;
				displayAndExit(-1) ;
			}
		}
		else if(input1 == "Organisations")
		{
			char thing = input[0] ;
			if(!isdigit(thing))
			{
				if(pluralityCheck(organisations, &input))
				//if there are, make user specify then ..../
				{
					auto fluff = getPlurals(organisations, &(input)) ;
					auto stuff = distinguishObject(&fluff, input) ;
					cout << endl ;
					if(stuff.size() > 1)
					{
						displayAndExit(-2) ;
					}
					pointerToObject = &stuff[0] ;
				}
				else {
					pointerToObject = getOrganisation(organisations, &(input)) ;
				}
			}
			else {
				pointerToObject = getOrganisation(organisations, &(input)) ;
			}
			if(pointerToObject == NULL)
			{
				displayAndExit(-1) ;
			}
		}
		
		input = (*value)[3] ;
		
	continuation:		
		
		//update database
		if(input1 == "Persons")
		{
			updateRecord(pointerToAnObject, value) ;
		}
		else {
			updateRecord(pointerToObject, value) ;
		}
	}
}

void insertRecord(string* tableName, vector<Occupation>* occupations, vector<string>* value)
{
	string temp = (*value)[2] ;
	auto values1 = formatValues(&temp) ; 
	//formatinstructions, return vector of strings == value
	auto values = &values1 ;
	
	sqlite::sqlite db("Surveillance.sqlite") ;
	auto cur = db.get_statement();
	if(*tableName == "Persons") 
	{
		cur->set_sql( "INSERT INTO Persons(Forename,Surname,Sex,DateOfBirth,PlaceOfBirth,CurrentAddress,PhoneNumber,OrganisationID,OccupationID,Socials) VALUES(?,?,?,?,?,?,?,?,?,?)" );
		cur->prepare();
		
		int counter = 0 ;
		for(auto it = begin(*values) ; it != end(*values) ; it = next(it))
		{
			counter += 1 ;
			if(counter == 3 || counter == 8 || counter == 9) { cur->bind(counter, stoi(*it)) ;}
			else { cur->bind(counter, *it) ;}
		}
		cur->step();
	}
	else if(*tableName == "Organisations") 
	{
		cur->set_sql( "INSERT INTO Organisations(Name,Location,Alias) VALUES(?,?,?)" );
		cur->prepare();
		
		int counter = 0 ;
		for(auto it = begin(*values) ; it != end(*values) ; it = next(it))
		{
			counter += 1 ;
			cur->bind(counter, *it) ;
		}
		cur->step();
	}
	else {
		cout << "insert;196" << endl ;
		displayAndExit(-1) ;
	}
}

void updateRecord(Person* pointerToPerson, vector<string>* value)
{
	string* columnName = &((*value)[3]) ;
	string value0 ;
	int value1 ;
	bool isInt = false ;
	if(*columnName == "Forename")
	{
		value0 = pointerToPerson->getName()[0] ;
	}
	else if(*columnName == "Surname")
	{
		value0 = pointerToPerson->getName()[1] ;
	}
	else if(*columnName == "Sex")
	{
		value1 = pointerToPerson->getSex() ;
		isInt = true ;
	}
	else if(*columnName == "DateOfBirth")
	{
		value0 = Person::reformatDateOfBirth(pointerToPerson->getDateOfBirth()) ;
	}
	else if(*columnName == "PlaceOfBirth")
	{
		value0 = Person::reformatPlaceOfBirth(pointerToPerson->getPlaceOfBirth()) ;
	}
	else if(*columnName == "CurrentAddress")
	{
		value0 = Person::reformatAddress(pointerToPerson->getCurrentAddress()) ;
	}
	else if(*columnName == "PhoneNumber")
	{
		value0 = Person::reformatphoneNumber(pointerToPerson->getPhoneNumber()) ;
	}
	else if(*columnName == "OrganisationID")
	{
		value1 = pointerToPerson->getOrganisationID() ;
		isInt = true ;
	}
	else if(*columnName == "OccupationID")
	{
		value1 = pointerToPerson->getOccupationID() ;
		isInt = true ;
	}
	else if(*columnName == "Socials")
	{
		value0 = Person::reformatSocials(pointerToPerson->getSocials()) ;
	}
	else {
		cout << "insert;250" << endl ;
		displayAndExit(-1) ;
	}
	
// 	sqlite::sqlite db("Surveillance.sqlite") ;
	
// 	auto cur = db.get_statement();
// 	cur->set_sql("UPDATE Persons SET " + (*columnName) + " = '?' WHERE ID = ?")  ;
// 	cur->prepare() ;
// 	if(isInt) 
// 	{ 
// 		cur->bind(1, value1 );
// 	}
// 	else 
// 	{ 
// 		cur->bind(1, value );
// 	}
// 	cur->bind(2, pointerToPerson->getID()) ;
	
    PyRun_SimpleString("import sys; sys.path.append('.')");
    PyRun_SimpleString("import update;");
	PyRun_SimpleString("update.wipeFile()");
	ofstream myfile;
	myfile.open("container.txt");
	myfile << (*columnName) << endl ;
	if(isInt) {myfile << value1 << endl ;}
	else {myfile << value << endl ;}
	myfile << pointerToPerson->getID() << endl ;
	myfile.close();
    PyRun_SimpleString("update.updateStatementPersons()");
}

void updateRecord(Organisation* pointerToOrganisation, vector<string>* value)
{
	string* columnName = &((*value)[3]) ;
	string value0 ;
	if(*columnName == "Name")
	{
		value0 = pointerToOrganisation->getName() ;
	}
	else if(*columnName == "Alias")
	{
		value0 = pointerToOrganisation->getAlias() ;
	}
	else if(*columnName == "Location")
	{
		value0 = Organisation::reformatAddress(pointerToOrganisation->getLocation()) ;
	}
	else {
		displayAndExit(-1) ;
	}
	
// 	sqlite::sqlite db("Surveillance.sqlite") ;
	
// 	auto cur = db.get_statement();
// 	cur->set_sql("UPDATE Organisations SET " + (*columnName) + " = '?' WHERE ID = ?") ;
// 	cur->prepare();
// 	cur->bind(1, value );
// 	cur->bind(2, pointerToOrganisation->getID() );
// 	cur->step();

    PyRun_SimpleString("import sys; sys.path.append('.')");
    PyRun_SimpleString("import update;");
	PyRun_SimpleString("update.wipeFile()");
	ofstream myfile;
	myfile.open("container.txt");
	myfile << (*columnName) << endl ;
	myfile << value << endl ;
	myfile << pointerToOrganisation->getID() << endl ;
	myfile.close();
    PyRun_SimpleString("update.updateStatementOrganisations()");
}