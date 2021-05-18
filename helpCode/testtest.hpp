#ifndef TESTTEST_HPP
#define TESTTEST_HPP
#pragma once

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

multimap<string,string> getTempSocials()
{
	multimap<string,string> tempSocials ;
	tempSocials = {{"Instagram","daleksla"},{"Snapchat","daleksla"},{"Twitter","bob"}} ;
	return tempSocials ;
}

multimap<string,string> getAnotherSocials()
{
	multimap<string,string> anotherSocials ;
	anotherSocials = {{"Instagram","daleksla"},{"Snapchat","daleksla"}} ;
	return anotherSocials ;
}

multimap<string,string> getMeow()
{
	multimap<string,string> anotherSocials ;
	anotherSocials = {{"-1","-1"}} ;
	return anotherSocials ;
}

#endif
