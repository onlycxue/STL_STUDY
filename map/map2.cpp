/*
 * =====================================================================================
 *
 *       Filename:  map2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月22日 13时35分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <stdlib.h>

using namespace std;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	typedef multimap<string,string> StrStrMMap;
	StrStrMMap dict;
	dict.insert(make_pair("day","Tag"));
	dict.insert(make_pair("strange","fremd"));
	dict.insert(make_pair("car","Auto"));
	dict.insert(make_pair("smart","elegant"));
	dict.insert(make_pair("trait","Merkmal"));
	dict.insert(make_pair("strange","seltsam"));
	dict.insert(make_pair("smart","raffiniert"));
	dict.insert(make_pair("smart","klug"));
	dict.insert(make_pair("clever","raffiniert"));
	
	StrStrMMap::iterator pos;
	cout.setf(ios::left,ios::adjustfield);
	cout << ' ' << setw(10) << "english" << "german" << endl;
	
	cout << setfill('-') << setw(20) << "" << setfill(' ') << endl;
	for(pos = dict.begin();pos != dict.end(); ++pos){
		cout << ' ' << setw(10) << pos->first.c_str() << pos->second << endl;		 
	}
	cout << endl;
	string word("smart");
	cout << word << ":" << endl;
	for(pos = dict.lower_bound(word); pos != dict.upper_bound(word); ++pos)
	{
		cout << "   " << pos->second << endl;
	}	
	word = ("raffiniert");
	cout << word << ":" << endl;
	for(pos = dict.begin();pos != dict.end(); ++pos)
	{
		if(pos->second == word)
		{
			cout << " " << pos->first << endl;
		}
	} 
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
