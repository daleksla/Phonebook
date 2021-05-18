/* This file is one of the two implementation files for all data manipulation and algorithmic functions */

#include "occupation.hpp"
#include "organisation.hpp"
#include "person.hpp"
#include "data.hpp"
#include "insert.hpp"
#include <iterator>
#include "/usr/include/python2.7/Python.h"
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string.hpp>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std ;

#include "libsqlite.hpp"

vector<string> formatValues(string* values) 
{
	vector<string> temp ;
	string x ;
	for(auto it = begin(*values) ; it != end(*values) ; it = next(it))
	{
		if(*it == '#')
		{
			temp.push_back(x) ;
			x = "" ;
		}
		else if(next(it) == end(*values))
		{
			temp.push_back(x) ;
			x = "" ;
		}
		else {
			x += (*it) ;
		}
	}
	return temp ;
}

vector<string> getValuesTextFile()
{
	vector<string> location ;
	ifstream file("container.txt");
	string str; 
	while(getline(file, str)) 
	{
		location.push_back(str) ;
	}
	return location ;
}

void insertValuesTextFile(vector<string>* values)
{
	ofstream myfile;
	myfile.open("container.txt");
	for(auto it = begin(*values) ; it != end(*values) ; it = next(it))
	{
		myfile << *it << endl ;
	}
	myfile.close();
}

vector<Organisation> getPlurals(vector<Organisation>* organisations, string* name)
{
	vector<Organisation> temp ;
	auto name1 = *name ;
	boost::to_lower(name1) ;
	boost::algorithm::trim(name1);
	for(auto it = begin(*organisations) ; it != end(*organisations) ; it = next(it))
	{
		auto rah = it->getName() ;
		boost::to_lower(rah) ;
		if(rah == name1)
		{
			temp.push_back(*it) ;
		}
	}
	return temp ;
}

vector<Person> getPlurals(vector<Person>* persons, string* name)
{
	vector<Person> temp ;
	auto name1 = *name ;
	boost::to_lower(name1) ;
	boost::algorithm::trim(name1); //trying to remove empty spaces at start & end of name inputs
	for(auto it = begin(*persons) ; it != end(*persons) ; it = next(it))
	{
		auto rah = it->getName()[0] ;
		boost::to_lower(rah) ;
		auto gah = it->getName()[0] + " " + it->getName()[1] ;
		boost::to_lower(gah) ;
		if(rah == name1 || gah == name1)
		{  
			temp.push_back(*it) ;
		}
	}
	return temp ;
}

bool pluralityCheck(vector<Organisation>* organisations, string* name)
{
	int counter = 0 ;
	auto name1 = *name ;
	boost::to_lower(name1) ;
	boost::algorithm::trim(name1); //trying to remove empty spaces at start & end of name inputs
	for(auto it = begin(*organisations) ; it != end(*organisations) ; it = next(it))
	{
		auto rah = it->getName() ;
		boost::to_lower(rah) ;
		if(rah == name1)
		{
			counter+=1 ;
		}
	}
	if(counter > 1) 
	{
		return true ;
	}
	return false ;
}

bool pluralityCheck(vector<Person>* persons, string* name)
{
	int counter = 0 ;
	for(auto it = begin(*persons) ; it != end(*persons) ; it = next(it))
	{
		if(counter > 1) {return true ;}
		
		auto fullName = it->getName()[0] + " " + it->getName()[1] ;
		
		auto name1 = *name ;
		boost::to_lower(name1) ;
		boost::algorithm::trim(name1); //trying to remove empty spaces at start & end of name inputs

		auto rah = it->getName()[0] ;
		boost::to_lower(rah) ;
		auto gah = it->getName()[0] + " " + it->getName()[1] ;
		boost::to_lower(gah) ;
		if(rah == name1 || gah == name1)
		{
			counter += 1;
		}
	}
	if(counter > 1) 
	{
		return true ;
	}
	return false ;
}

Person* getPerson(vector<Person>* persons, string* name)
{
	for(auto it = begin(*persons) ; it != end(*persons) ; it = next(it))
	{
		auto name1 = *name ;
		boost::to_lower(name1) ;
		boost::algorithm::trim(name1); //trying to remove empty spaces at start & end of name inputs
		auto rah = it->getName()[0] ;
		boost::to_lower(rah) ;
		auto gah = it->getName()[0] + " " + it->getName()[1] ;
		boost::to_lower(gah) ;
		if(rah == name1 || gah == name1)
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

Person* getPerson(vector<Person>* persons, int* ID)
{
	for(auto it = begin(*persons) ; it != end(*persons) ; it = next(it))
	{
		if(it->getID() == *ID)
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

Occupation* getOccupation(vector<Occupation>* occupations, int* ID)
{
	for(auto it = begin(*occupations) ; it != end(*occupations) ; it = next(it))
	{
		if(it->getID() == *(ID))
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

Occupation* getOccupation(vector<Occupation>* occupations, string* Name)
{
	for(auto it = begin(*occupations) ; it != end(*occupations) ; it = next(it))
	{
		if(it->getName() == *(Name))
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

Organisation* getOrganisation(vector<Organisation>* organisations, int* ID)
{
	for(auto it = begin(*organisations) ; it != end(*organisations) ; it = next(it))
	{
		if(it->getID() == *(ID))
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

Organisation* getOrganisation(vector<Organisation>* organisations, string* Name)
{
	for(auto it = begin(*organisations) ; it != end(*organisations) ; it = next(it))
	{
		if(it->getName() == *(Name))
		{
			return &(*it) ;
		}
	}
	return NULL ;
}

vector<Person>* getObjects(vector<int>* IDs, vector<Person>* objects)
{
	for(auto it = begin(*IDs) ; it != end(*IDs) ; it = next(it))
	{
		Person itz(*it) ;
		objects->push_back(itz) ;
	}
	return objects ;
}

vector<Occupation>* getObjects(vector<int>* IDs, vector<Occupation>* objects)
{
	for(auto it = begin(*IDs) ; it != end(*IDs) ; it = next(it))
	{
		Occupation itz(*it) ;
		objects->push_back(itz) ;
	}
	return objects ;
}
	
vector<Organisation>* getObjects(vector<int>* IDs, vector<Organisation>* objects)
{
	for(auto it = begin(*IDs) ; it != end(*IDs) ; it = next(it))
	{
		Organisation itz(*it) ;
		objects->push_back(itz) ;
	}
	return objects ;
}

vector<int> getIDs(string tableName)
{	
	sqlite::sqlite db("Surveillance.sqlite") ;
	
	auto zur = db.get_statement();
	zur->set_sql( "select COUNT(*) from " + tableName );
	zur->prepare();
	zur->step();
	
	int count = zur->get_int(0) ;

	auto cur = db.get_statement();
	cur->set_sql( "select ID from " + tableName );
	cur->prepare();
	cur->step();
	
	vector<int> IDs ;
	
	int i = 0 ;
	while(i < count)
	{
		IDs.push_back(cur->get_int(0)) ;
		++i ;
		cur->step();
	}

	return IDs ;	
}

vector<Organisation> distinguishObject(vector<Organisation>* objects, string Name)
{
	cout << "There are currently multiple organisations with the name '" << Name << "'" << endl ;
	cout << "(Please select the one you seek by entering it's alias, or use wildcard '*' to see all organisations with said name)" << endl ;

	for(auto it = begin(*objects) ; it != end(*objects) ; it = next(it) )
	{
		cout << "* " << it->getName() << ": " << it->getAlias() << endl ;
	}

	string input = "" ;
	cout << "< " ; getline(cin, input) ;

	if(input == "*")
	{
		return *objects ;
	}
	else {
		vector<Organisation> fitz ;
		for(auto it = begin(*objects) ; it != end(*objects) ; it = next(it) )
		{
			if(input == it->getAlias())
			{
				fitz.push_back(*it) ;
				return fitz ;
			}
			
			if(next(it) == end(*objects))
			{
				cout << "data;325" << endl ;
				displayAndExit(-2) ;
			}
		}
	}
}

vector<Person> distinguishObject(vector<Person>* objects, string Name)
{
	cout << "There are currently multiple people with the name '" << Name << "'" << endl ;
	cout << "(Please select the one you seek by entering the first and last name, or use wildcard '*' to see all persons with said name)" << endl ;
	
	for(auto it = begin(*objects) ; it != end(*objects) ; it = next(it) )
	{
		cout << "* " << it->getName()[0] << " " << it->getName()[1] << endl ;
	}

	string input = "" ;
	cout << "< " ; getline(cin, input) ;

	if(input == "*")
	{
		return *objects ;
	}
	else {
		vector<Person> thing ;
		for(auto it = begin(*objects) ; it != end(*objects) ; it = next(it))
		{
			string fullName = it->getName()[0] + " " + it->getName()[1] ;
			if(input == fullName)
			{
				thing.push_back(*it) ;
			}
		}
		if(thing.empty())
		{
			cout << "data;360" << endl ;
			displayAndExit(-2) ;
		}
		return thing ;
	}
}

void clearScreen() 
{
	const char* SHELLSCRIPT = "\#!/bin/bash \n\clear >$(tty) \n " ;
	system(SHELLSCRIPT);
}

void displayAndExit(int errorCode)
{
	cout << endl ;
	Py_Finalize();
	if(errorCode == -1)
	{
		cout << "That is not a valid mode/option!" << endl ;
		exit(-1) ;
	}
	else if(errorCode == -2)
	{
		cout << "That operation cannot be performed!" << endl ;
		exit(-2) ;
	}
	else if(errorCode == 0)
	{
		cout << "Program execueted successfully!" << endl ;
		exit(0) ;
	}
}