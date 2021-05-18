/* Include the unit testing library */
#define CATCH_CONFIG_MAIN //creates a main function as all CPP files need
#include "catch.hpp"
#include "testtest.hpp"
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

multimap<string, string> formatSocials(string input)
{
	if(input == "-1")
	{
		return {{"-1", "-1"}} ;
	}
	multimap<string, string> tempSocials ;
	string name = "" ;
	bool status = true ;
	string username = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(next(it) == end(input))
		{
			username.push_back(*it) ;
			tempSocials.insert(pair <string, string> (name, username));
			break ;
		}
	
		if(*it == '@')
		{
			status = false ;
			continue ;
		}
		
		if(*it == ';')
		{
			tempSocials.insert(pair <string, string> (name, username));
			name = "" ; username = "" ;
			status = true ;
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

/* Create sub-categories to test with predicted outcomes */

TEST_CASE("formatSocials Function")
{
	REQUIRE( formatSocials("Instagram@daleksla;Snapchat@daleksla;Twitter@bob").size() == 3 );
	REQUIRE( formatSocials("Instagram@daleksla;Snapchat@daleksla").size() == 2 );
	REQUIRE( formatSocials("Instagram@daleksla").size() == 1 );
	REQUIRE( formatSocials("-1") == getMeow() );
	REQUIRE( formatSocials("-1").size() == 1 );
	REQUIRE( formatSocials("Instagram@daleksla;Snapchat@daleksla;Twitter@bob") == getTempSocials());
}

