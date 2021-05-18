/* This is our source file - this is where our code will be used for the purpose of logging & viewing data 
 * Remember to link the sqlite3 library upon compilation
 * To compile, type in the terminal:
	 * 'g++ --std=c++14 getOccupation.cpp addPerson.cpp getPerson.cpp addOrganisation.cpp getOrganisation.cpp data.cpp display.cpp insert.cpp source.cpp -lsqlite3' */

#include "person.hpp" //we will use this to make objects
#include "occupation.hpp" //""
#include "organisation.hpp" //""
#include "data.hpp" //we will use this to manipulate data created within this file
#include "insert.hpp" //we will use this to insert into database
#include "/usr/include/python2.7/Python.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <map>
#include <typeinfo>
#include <unistd.h>
using namespace std ;

#include "libsqlite.hpp"

int main()
{
	vector<string> values = {"1", "Persons", "Salih Ahmed", "Sex", "0"} ;
	alternativeMain(&values) ;
	//
	return 0 ;
}