/* This header file contains defintions for all data manipulation and algorithmic functions */

#ifndef DATA_HPP
#define DATA_HPP
#pragma once

#include "occupation.hpp"
#include "organisation.hpp"
#include "person.hpp"
#include <vector>
#include <string>
using namespace std ;

vector<string> formatValues(string*) ;

vector<string> getValuesTextFile() ;

void insertValuesTextFile(vector<string>*) ;

vector<Organisation> getPlurals(vector<Organisation>*, string*) ;

vector<Person> getPlurals(vector<Person>*, string*) ;

vector<Person> distinguishObject(vector<Person>*, string) ;

vector<Organisation> distinguishObject(vector<Organisation>*, string) ;

bool pluralityCheck(vector<Organisation>*, string*) ;

bool pluralityCheck(vector<Person>*, string*) ;

Organisation* getOrganisation(vector<Organisation>*, int*) ;

Organisation* getOrganisation(vector<Organisation>*, string*) ;

Occupation* getOccupation(vector<Occupation>*, int*) ;

Occupation* getOccupation(vector<Occupation>*, string*) ;

Person* getPerson(vector<Person>* persons, string*) ;

Person* getPerson(vector<Person>* persons, int*) ;

vector<Person>* getObjects(vector<int>*, vector<Person>*) ;

vector<Occupation>* getObjects(vector<int>*, vector<Occupation>*) ;

vector<Organisation>* getObjects(vector<int>*, vector<Organisation>*) ;

vector<int> getIDs(string) ;

void clearScreen() ;

void displayAndExit(int) ;

#endif