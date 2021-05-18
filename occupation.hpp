/* This is our header file containing the definitions for all of our occupation-related functions & class methods */

#ifndef OCCUPATION_HPP
#define OCCUPATION_HPP
#pragma once

#include <string>
using namespace std ;

class Occupation {
	protected:
		int ID ;
		string Name ;
	public:
		Occupation(int) ;
		Occupation(int, string) ;
		int getID() ;
		string getName() ;
};

#endif