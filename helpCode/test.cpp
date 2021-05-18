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

int calculateAge()
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
		else if(counter == 2) //month
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
		else if(counter == 4) //month
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
	
	int pd = currentDate[1];
	int pm = currentDate[0];
	int py = currentDate[2] ;
	
	int bd = 8 ;
	int bm = 12 ;
	int by = 2000 ;
	
    // days of every month 
  
	int d, m, y;
	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	y = py - by;
	if (pm < bm)
	{
		y--;
		m = 12 - (bm - pm);       
	}
	else
	{
		m = pm - bm;
	}
	
	if (pd < bd)
	{
		m--;
		d = md[pm - 1] - (bd - pd);
	}
	else
	{
		d = pd - bd;
	}
	
    // return the present age 
    return y ;
} 

vector<int> formatDateOfBirth(string input)
{
	if(input == "-1")
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

vector<double> formatPlaceOfBirth(string input)
{
	if(input == "-1")
	{
		return {-1} ;
	}
	vector<double> tempPlaceOfBirth ;
	string x = "" ;
	for(auto it = begin(input) ; it != end(input) ; it = next(it))
	{
		if(*it == ';')
		{
			tempPlaceOfBirth.push_back((stod(x))) ;
			x = "" ;
		}
		else if(next(it) == end(input))
		{
			tempPlaceOfBirth.push_back((stod(x))) ;
		}	
		else {
			x.push_back(*it) ;
		}
	}
	return tempPlaceOfBirth ;
}

int main()
{
//	cout << calculateAge() << endl ;
//	vector<int> peem = formatDateOfBirth("08/12/2000") ;
//	for(auto it = begin(peem) ; it != end(peem) ; it = next(it))
//	{
//		cout << *it << endl ;	
//	}
//	vector<double> jeem = formatPlaceOfBirth("52.565030;-1.816480") ;
//	for(auto it = begin(jeem) ; it != end(jeem) ; it = next(it))
//	{
//		cout << *it << endl ;	
//	}
	auto tempSocials = formatSocials("Instagram@daleksla;Snapchat@daleksla;Twitter@bob") ;
	cout << "* Socials: " << endl ;
	for(auto it = tempSocials.begin() ; it != tempSocials.end() ; it = tempSocials.upper_bound(it->first))
	{
		cout << "\t- " << it->first << ": " << it->second << endl;
	}
	
	//
	return 0 ;
}
