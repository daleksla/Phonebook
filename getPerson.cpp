/* Here, we create the constructors (to retrieve all persons from database) & functions to view data records 
 * This is one, of the two, client files regarding implementation of our 'Person' class */

#include "person.hpp" //we will use this to obtain defintions 
#include <string>
#include <boost/algorithm/string/trim.hpp>
#include <vector>
#include <iterator>
#include <ctype.h>
#include <algorithm>
#include <map>
#include <ctime>
#include <iostream>
#include <stdlib.h> 
#include <cctype>
#include <cstring>
using namespace std ;

#include "libsqlite.hpp"

Person::Person(int i_ID)
{
	this->ID = i_ID ;
	
	sqlite::sqlite db("Surveillance.sqlite") ;
	
	auto cur = db.get_statement();
	cur->set_sql( "select Forename from Persons where ID = ?" );
	cur->prepare();
	cur->bind( 1, ID );
	cur->step();
	
	string temp = string(cur->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	
	this->Forename = temp ;
	
	auto zur = db.get_statement();
	zur->set_sql( "select Surname from Persons where ID = ?" );
	zur->prepare();
	zur->bind( 1, ID );
	zur->step();
	
	temp = string(zur->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->Surname = temp ;
	
	auto duh = db.get_statement();
	duh->set_sql( "select Sex from Persons where ID = ?" );
	duh->prepare();
	duh->bind( 1, ID );
	duh->step();
	
	auto meow = duh->get_int(0) ;
	this->Sex = formatSex(meow) ;
	
	auto f = db.get_statement();
	f->set_sql( "select DateOfBirth from Persons where ID = ?" );
	f->prepare();
	f->bind( 1, ID );
	f->step();

	temp = string(f->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->dateOfBirth = formatDateOfBirth(temp) ;
		
	if(temp[0] == '-' && temp[1] == '1') 
	{ 
		this->Age = -1 ;
	}
	else { 
		this->Age = calculateAge() ;
	}
	
	auto alpacha = db.get_statement();
	alpacha->set_sql( "select PlaceOfBirth from Persons where ID = ?" );
	alpacha->prepare();
	alpacha->bind( 1, ID );
	alpacha->step();
	
	temp = string(alpacha->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->placeOfBirth = formatPlaceOfBirth(temp) ;
// 	cout << "#1PlaceOfBirth: " << temp << endl ;
// 	cout << "#2PlaceOfBirth: " ;
// 	for(auto it = begin(placeOfBirth) ; it != end(placeOfBirth) ; it = next(it))
// 	{
// 		cout << *it ;
// 	}
// 	cout << "\n########" << endl ;
	
	auto p = db.get_statement();
	p->set_sql( "select CurrentAddress from Persons where ID = ?" );
	p->prepare();
	p->bind( 1, ID );
	p->step();
	
	temp = string(p->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->currentAddress = formatAddress(temp) ;
// 	cout << "#1CurrentAddress: " << temp << endl ;
// 	cout << "#2CurrentAddress: " ;
// 	for(auto it = begin(currentAddress) ; it != end(currentAddress) ; it = next(it))
// 	{
// 		cout << *it ;
// 	}
// 	cout << "\n########" << endl ;
	
	auto g = db.get_statement();
	g->set_sql( "select PhoneNumber from Persons where ID = ?" );
	g->prepare();
	g->bind( 1, ID );
	g->step();
	
	temp = string(g->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->phoneNumber = formatphoneNumber(temp) ;

	auto fhgj = db.get_statement();
	fhgj->set_sql( "select OrganisationID from Persons where ID = ?" );
	fhgj->prepare();
	fhgj->bind( 1, ID );
	fhgj->step();
	
	this->OrganisationID = fhgj->get_int(0) ;	
	
	auto ph = db.get_statement();
	ph->set_sql( "select OccupationID from Persons where ID = ?" );
	ph->prepare();
	ph->bind( 1, ID );
	ph->step();
	
	this->OccupationID = ph->get_int(0) ;
	
	auto zh = db.get_statement();
	zh->set_sql( "select Socials from Persons where ID = ?" );
	zh->prepare();
	zh->bind( 1, ID );
	zh->step();
	
	temp = string(zh->get_text(0)) ;
	boost::algorithm::trim(temp) ;
	this->socials = formatSocials(temp) ;
}

Person::Person(int i_ID, string i_Forename, string i_Surname, bool i_Sex, vector<int> i_DateOfBirth, vector<long double> i_PlaceOfBirth, vector<long double> i_CurrentAddress, vector<long> i_PhoneNumber, int i_OrganisationID, int i_OccupationID, multimap<string, string> i_Socials)
{
	this->ID = i_ID ;
	this->Forename = i_Forename ;
	this->Sex = i_Sex ;
	this->dateOfBirth = i_DateOfBirth ;
	this->Age = calculateAge() ;
	this->placeOfBirth = i_PlaceOfBirth ;
	this->currentAddress = i_CurrentAddress ;
	this->phoneNumber = i_PhoneNumber ;
	this->OrganisationID = i_OrganisationID ;
	this->OccupationID = i_OccupationID ;
	this->socials = i_Socials ; 
}

bool Person::formatSex(int input)
{
	if(input == 1)
	{
		return true ;
	}
	return false ;
}

vector<int> Person::formatDateOfBirth(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	else if(input.empty())
	{
		return {-1} ;
	}
	vector<int> tempDateOfBirth ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == '/')
		{
			tempDateOfBirth.push_back((stoi(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			x.push_back(*it) ;
			tempDateOfBirth.push_back((stoi(x))) ;
		}
		else {
			//if(*it == '0') {continue ; }
			x.push_back(*it) ;
		}
	}
	return tempDateOfBirth ;
}

vector<long double> Person::formatPlaceOfBirth(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	else if(input.empty())
	{
		return {-1} ;
	}
	vector<long double> tempPlaceOfBirth ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == ';')
		{
			tempPlaceOfBirth.push_back((stold(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			tempPlaceOfBirth.push_back((stold(x))) ;
		}	
		else {
			x.push_back(*it) ;
		}
	}
	return tempPlaceOfBirth ;
}

vector<long double> Person::formatAddress(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	else if(input.empty())
	{
		return {-1} ;
	}
	vector<long double> tempAddress ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == ';')
		{
			tempAddress.push_back((stold(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			tempAddress.push_back((stold(x))) ;
		}	
		else {
			x.push_back(*it) ;
		}
	}
	return tempAddress ;
}

vector<long> Person::formatphoneNumber(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	else if(input.empty())
	{
		return {-1} ;
	}
	vector<long> tempNumber ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == ';')
		{
			tempNumber.push_back((stol(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			x.push_back(*it) ;
			tempNumber.push_back((stol(x))) ;
		}
		else {
			x.push_back(*it) ;
		}
	}
	return tempNumber ;
}

multimap<string, string> Person::formatSocials(string input)
{
	if(input == "-1")
	{
		return {{"-1", "-1"}} ;
	}
	else if(input.empty())
	{
		return {{"-1","-1"}} ;
	}
	multimap<string, string> tempSocials ;
	string name = "" ;
	bool status = true ;
	int newthing = true ;
	string username = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(next(it) == end(input))
		{
			username.push_back(*it) ;
			string temp ;
			if(username[0] == '@')
			{
				for(auto it = next(begin(username)) ; it != end(username) ; it = next(it))
				{
					temp += *it ;
				}
				username = temp ;
			}
			tempSocials.insert(pair <string, string> (name, username));
			break ;
		}
	
		if(*it == '@')
		{
			if(newthing >= 1)
			{
				username.push_back('@') ;
			}
			newthing += 1;
			status = false ;
			continue ;
		}
		
		if(*it == ';')
		{
			if(username[0] == '@')
			{
				string temp ;
				for(auto it = next(begin(username)) ; it != end(username) ; it = next(it))
				{
					temp += *it ;
				}
				username = temp ;
			}
			tempSocials.insert(pair <string, string> (name, username));
			name = "" ; username = "" ;
			status = true ;
			newthing = 0 ;
			continue ;
		}
		
		if(status)
		{
			name.push_back(*it) ;
		}
		if(!status)
		{
			username.push_back(*it) ;
		}
	}
	return tempSocials ;
}

int Person::calculateAge()
{ 
    // Declaring argument for time() 
    time_t tt; 
  
    // Declaring variable to store return value of 
    // localtime() 
    struct tm * ti; 
  
    // Applying time() 
    time (&tt); 
  
    // Using localtime() 
    ti = localtime(&tt); 
  
	string bob = string(asctime(ti));
	
	map<string, int> months = {
		{"Jan", 1}, {"Feb", 2}, {"Mar", 3}, {"Apr", 4}, {"May", 5}, {"Jun", 6}, {"Jul", 7},
						{"Aug", 8}, {"Sep", 9}, {"Oct", 10}, {"Nov", 11}, {"Dec", 12}
	} ;
	
	int counter = 0 ;
	
	string x = "" ; 
	
	vector<int> currentDate ;
	
	for(auto it = begin(bob) ; it != end(bob) ; it = next(it))
	{
		char tis = *it ;
		if(tis == ' ')
		{
			counter += 1 ;
			continue ;
		}
		
		if(counter == 1) //month
		{
			auto itz = next(it) ;
			char thingy = *itz ;
			if(thingy == ' ')
			{
				x.push_back(tis) ;
				currentDate.push_back(months[x]) ;
				x = "" ;
			}
			else 
			{
				x.push_back(tis) ;
			}
			continue ;
		}
		else if(counter == 3) //day
		{
			auto itz = next(it) ;
			char thingy = *itz ;
			if(thingy == ' ')
			{
				x.push_back(tis) ;
				currentDate.push_back((stoi(x))) ;
				x = "" ;
			}
			else 
			{
				x.push_back(tis) ;
			}
			continue ;
		}
		else if(counter == 4) //year if error change between 4/5
		{
			auto itz = next(it) ;
			char thingy = *itz ;
			if(!isdigit(thingy))
			{
				x.push_back(tis) ;
				currentDate.push_back((stoi(x))) ;
				x = "" ;
				break ;
			}
			else 
			{
				x.push_back(tis) ;
			}
			continue ;
		}
	}
	
	int current_date = currentDate[1];
	int current_month = currentDate[0];
	int current_year = currentDate[2] ;
	
	int birth_date = this->dateOfBirth[0] ;
	int birth_month = this->dateOfBirth[1] ;
	int birth_year = this->dateOfBirth[2] ;
	
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 
						31, 30, 31, 30, 31 }; 

	// if birth date is greater then current birth 
	// month then do not count this month and add 30 
	// to the date so as to subtract the date and 
	// get the remaining days 
	if (birth_date > current_date) 
	{ 
		current_date = current_date + month[birth_month - 1]; 
		current_month = current_month - 1; 
	} 

	// if birth month exceeds current month, then do 
	// not count this year and add 12 to the month so 
	// that we can subtract and find out the difference 
	if (birth_month > current_month) { 
		current_year = current_year - 1; 
		current_month = current_month + 12; 
	} 

	// calculate date, month, year 
	int calculated_date = current_date - birth_date; 
	int calculated_month = current_month - birth_month; 
	int calculated_year = current_year - birth_year; 
	
    // return the present age 
    return calculated_year ;
} 
	
int Person::getID()
{
	return ID ;
}

vector<string> Person::getName()
{
	return {Forename, Surname} ;
}

int Person::getAge()
{
	return Age ;
}
	
bool Person::getSex()
{
	return Sex ;
}
	
vector<int> Person::getDateOfBirth()
{
	return dateOfBirth ;
}

vector<long double> Person::getPlaceOfBirth()
{
	return placeOfBirth ;
}

vector<long double> Person::getCurrentAddress()
{
	return currentAddress ;
}

vector<long> Person::getPhoneNumber()
{
	return phoneNumber ;
}

int Person::getOrganisationID()
{
	return OrganisationID ;
}

int Person::getOccupationID()
{
	return OccupationID ;
}	

multimap<string, string> Person::getSocials()
{
	return socials ;
}