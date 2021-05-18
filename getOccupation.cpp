/* Here, we create the constructors (to retrieve all occupations from database) & functions to view data records 
 * This is one, of the two, client files regarding implementation of our 'Occupation' class */

#include "occupation.hpp"
#include <string>
using namespace std ;

#include "libsqlite.hpp"

Occupation::Occupation(int i_ID)
{
	this->ID = i_ID ;
	
	sqlite::sqlite db("Surveillance.sqlite") ;
	
	auto cur = db.get_statement();
	cur->set_sql( "select Name from Occupations where ID = ?" );
	cur->prepare();
	cur->bind( 1, ID );
	cur->step();
	
	this->Name = cur->get_text(0) ;
}

Occupation::Occupation(int i_ID, string i_Name)
{
	this->ID = i_ID ;
	this->Name = i_Name ;
}

int Occupation::getID()
{
	return ID ;
}

string Occupation::getName()
{
	return Name ;
}