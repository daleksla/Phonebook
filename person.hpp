/* This is our header file containing the definitions for all of our person-related functions & class methods */

#ifndef PERSON_HPP
#define PERSON_HPP
#pragma once

#include <string>
#include <vector>
#include <map>
using namespace std ;

class Person {
	protected:
		int ID ;
		string Forename, Surname ;
		
		int Age ;
		int calculateAge() ;
	
		bool Sex ; //1 = male, 0 = female 
		bool formatSex(int) ;
		
		vector<int> dateOfBirth ;
		vector<int> formatDateOfBirth(string) ;	
		vector<long double> placeOfBirth ; //longitude, latitude
		vector<long double> formatPlaceOfBirth(string) ;	
		vector<long double> currentAddress ; //longitude, latitude
		vector<long double> formatAddress(string) ;	
		vector<long> phoneNumber ; //country code & number
		vector<long> formatphoneNumber(string) ;	
		int OrganisationID ; //should be positive ; if data == -1, no position   
	
		int OccupationID ; //should be positive ; if data == -1, no position
	
		multimap <string, string> socials; 
		multimap <string, string> formatSocials(string) ;		
	public:
		Person(int) ;
		Person(int, string, string, bool, vector<int>, vector<long double>, vector<long double>, vector<long>, int, int, multimap<string, string>) ;
		//get information
		int getID() ;
		vector<string> getName() ;
		void setForename(string) ; //
		void setSurname(string) ; //
		int getAge() ;
		bool getSex() ;
		void setSex(string) ; //
		vector<int> getDateOfBirth() ;
		void setDateOfBirth(string) ; //
		static string reformatDateOfBirth(vector<int>) ;
		vector<long double> getPlaceOfBirth() ;
		void setPlaceOfBirth(string) ; //
		static string reformatPlaceOfBirth(vector<long double>) ;
		vector<long double> getCurrentAddress() ;
		void setCurrentAddress(string) ; //
		static string reformatAddress(vector<long double>) ;
		vector<long> getPhoneNumber() ;
		void setPhoneNumber(string) ; //
		static string reformatphoneNumber(vector<long>) ;
		int getOrganisationID() ;
		void setOrganisationID(string) ; //
		int getOccupationID() ;
		void setOccupationID(string) ; //
		multimap<string, string> getSocials() ;
		void setSocials(string) ; //
		static string reformatSocials(multimap <string, string>) ;
};

#endif