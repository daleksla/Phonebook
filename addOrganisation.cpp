/* Here, we create functions to modify & add to data records 
 * This is one, of the two, client files regarding implementation of our 'organisation' class */

#include "organisation.hpp"
#include <string>
#include <vector>
using namespace std ;

#include "libsqlite.hpp"

string Organisation::reformatAddress(vector<long double> currentAddress)
{
	string address ;
	if(currentAddress.empty()) {return "-1";}
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

void Organisation::setName(string value)
{
	this->Name = value ;
}

void Organisation::setLocation(string value)
{
	this->Location = formatLocation(value) ;
}

void Organisation::setAlias(string value)
{
	this->Alias = value ;
}