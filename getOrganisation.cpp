/* Here, we create the constructors (to retrieve all organisation from database) & functions to view data records 
 * This is one, of the two, client files regarding implementation of our 'Organisation' class */

#include "organisation.hpp"
#include <string>
#include <vector>
#include <boost/algorithm/string/trim.hpp>
#include <stdlib.h> 
#include <cctype>
#include <cstring>
using namespace std ;

#include "libsqlite.hpp"

Organisation::Organisation(int i_ID)
{
	this->ID = i_ID ;
	
	sqlite::sqlite db("Surveillance.sqlite") ;
	
	auto cur = db.get_statement();
	cur->set_sql( "select Name from Organisations where ID = ?" );
	cur->prepare();
	cur->bind( 1, ID );
	cur->step();
	
	string temp = string(cur->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	
	this->Name = temp ;
	
	auto zur = db.get_statement();
	zur->set_sql( "select Location from Organisations where ID = ?" );
	zur->prepare();
	zur->bind( 1, ID );
	zur->step();
	
	temp = string(zur->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	
	this->Location = formatLocation(temp) ;
	
	auto fur = db.get_statement();
	fur->set_sql( "select Alias from Organisations where ID = ?" );
	fur->prepare();
	fur->bind( 1, ID );
	fur->step();
	
	temp = string(fur->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	
	this->Alias = temp ;
}

Organisation::Organisation(int i_ID, string i_Name, vector<long double> i_Location, string i_Alias)
{
	this->ID = i_ID ;
	this->Name = i_Name ;
	this->Location = i_Location ;
	this->Alias = i_Alias ;
}

vector<long double> Organisation::formatLocation(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	vector<long double> tempLocation ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == ';')
		{
			tempLocation.push_back((stold(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			tempLocation.push_back((stold(x))) ;
		}	
		else {
			x.push_back(*it) ;
		}
	}
	return tempLocation ;
}

int Organisation::getID()
{
	return ID ;
}

string Organisation::getName()
{
	return Name ;
}

vector<long double> Organisation::getLocation()
{
	return Location ;
}

string Organisation::getAlias()
{
	return Alias ;
}