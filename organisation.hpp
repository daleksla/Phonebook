/* This is our header file containing the definitions for all of our organisation-related functions & class methods */

#ifndef ORGANISATION_HPP
#define ORGANISATION_HPP
#pragma once

#include <string>
#include <vector>
using namespace std ;

class Organisation {
	protected:
		int ID ;
		string Name ;
		vector<long double> Location ;
		vector<long double> formatLocation(string) ;
		string Alias ;
	public:
		Organisation(int) ;
		Organisation(int, string, vector<long double>, string) ;
		int getID() ;
		string getName() ;
		void setName(string) ;
		vector<long double> getLocation() ;
		void setLocation(string) ;
		static string reformatAddress(vector<long double>) ;
		string getAlias() ;
		void setAlias(string) ;
};

#endif