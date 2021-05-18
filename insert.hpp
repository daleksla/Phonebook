/* This header file contains defintions for all Database Insertion functions */

#ifndef INSERT_HPP
#define INSERT_HPP
#pragma once

#include "occupation.hpp"
#include "organisation.hpp"
#include "person.hpp"
#include "data.hpp"
#include <iterator>
#include "/usr/include/python2.7/Python.h"
#include <boost/algorithm/string/trim.hpp>
#include <boost/algorithm/string.hpp>
#include <stdio.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
using namespace std ;

#include "libsqlite.hpp"

void alternativeMain(vector<string>*) ;

void modifyRecords(vector<Person>*, vector<Organisation>*, vector<Occupation>*, vector<string>*) ;

void insertRecord(string*, vector<Occupation>*, vector<string>*) ; //vector of ready to add string values, table name

void updateRecord(Person*, vector<string>*) ; //the person pointer, updated with values, needs to be implemented. 
//column name needed

void updateRecord(Organisation*, vector<string>*) ; //the organisation pointer, updated with values, needs to be implemented. column name

#endif