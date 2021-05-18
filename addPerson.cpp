/* Here, we create functions to modify & add to data records 
 * This is one, of the two, client files regarding implementation of our 'Person' class */

#include "person.hpp" //we will use this to obtain defintions 
#include <string>
#include <vector>
#include <iterator>
#include <ctype.h>
#include <algorithm>
#include <map>
#include <ctime>
#include <iostream>
#include <stdlib.h> 
using namespace std ;

#include "libsqlite.hpp"
	
string Person::reformatDateOfBirth(vector<int> DateOfBirth)
{
	string date ;
	
	if(DateOfBirth.empty()) {return "-1";}
	else if(DateOfBirth[0] == -1) {return "-1";}
	
	for(int i = 0 ; i < 3 ; i += 1)
	{
		if(DateOfBirth[i] < 10)
		{
			date.append("0") ;
		}
		date.append(to_string(DateOfBirth[i])) ;
	
		if(i != 2)
		{
			date.append("/") ;
		}
	}
	return date ;
}

string Person::reformatPlaceOfBirth(vector<long double> PlaceOfBirth)
{
	string tempPlaceOfBirth ;
	if(PlaceOfBirth.empty()) {return "-1";}
	else if(PlaceOfBirth[0] == -1) {return "-1";}
	for(auto it = begin(PlaceOfBirth) ; it != end(PlaceOfBirth) ; it = next(it))
	{
		if(*it == -1) 
		{
			return "-1" ;
		}
		tempPlaceOfBirth.append(to_string(*it)) ;
		
		if(next(it) != end(PlaceOfBirth))
		{
			tempPlaceOfBirth.append(";") ;
		}
		else {
			break ;
		}
	}
	return tempPlaceOfBirth;
}

string Person::reformatAddress(vector<long double> currentAddress)
{
	string address ;
	if(currentAddress.empty()) {return "-1";}
	else if(currentAddress[0] == -1) {return "-1";}
	for(auto it = begin(currentAddress) ; it != end(currentAddress) ; it = next(it))
	{
		if(*it == -1) 
		{
			return "-1" ;
		}
		address.append(to_string(*it)) ;
		
		if(next(it) != end(currentAddress))
		{
			address.append(";") ;
		}
		else {
			break ;
		}
	}
	return address;
}

string Person::reformatphoneNumber(vector<long> phoneNumber)
{
	string number ;
	if(phoneNumber.empty()) {return "-1";}
	else if(phoneNumber[0] == -1) {return "-1";}
	for(auto it = begin(phoneNumber) ; it != end(phoneNumber) ; it = next(it))
	{
		if(*it == -1) 
		{
			return "-1" ;
		}
		number.append(to_string(*it)) ;
		
		if(next(it) != end(phoneNumber))
		{
			number.append(";") ;
		}
		else {
			break ;
		}
	}
	return number;
}

string Person::reformatSocials(multimap <string, string> socials)
{
	string tempSocials ;
	if(socials.empty() <= 0) {return "-1";}
	for(auto it = socials.begin() ; it != socials.end() ; it = socials.upper_bound(it->first))
	{
		tempSocials.append(it->first) ;
		tempSocials.append("@") ;
		tempSocials.append(it->second) ;
		
		try {
			socials.upper_bound(it->first) ;
			tempSocials.append(";") ;
		}
		catch(exception)
		{
			break ;
		}
	}
	return tempSocials ;
}

void Person::setForename(string value)
{
	this->Forename = value ;
}

void Person::setSurname(string value)
{
	this->Surname = value ;
}

void Person::setSex(string value)
{
	this->Sex = stoi(value) ;
}

void Person::setDateOfBirth(string value)
{
// 	cout << "Hello" << endl ;
	this->dateOfBirth = formatDateOfBirth(value) ;
// 	cout << "Bye" << endl ;
}

void Person::setPlaceOfBirth(string value)
{
	this->placeOfBirth = formatPlaceOfBirth(value) ;	
}

void Person::setCurrentAddress(string value)
{
	this->currentAddress = formatAddress(value) ;
}

void Person::setPhoneNumber(string value)
{
	this->phoneNumber = formatphoneNumber(value) ;
}

void Person::setOrganisationID(string value)
{
	this->OrganisationID = stoi(value) ;
}

void Person::setOccupationID(string value)
{
	this->OccupationID = stoi(value) ;
}

void Person::setSocials(string value)
{
	this->socials = formatSocials(value) ;
}