/*
 * =====================================================================================
 *
 *       Filename:  map3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月22日 16时11分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <algorithm>
#include <stdlib.h>
using namespace std;

class RuntimeStringCmp {

public:
	enum cmp_mode{normal,nocase};
private:
	const cmp_mode mode;
	static bool nocase_compare (char c1,char c2)
	{
		return toupper(c1) < toupper(c2);
	}
public:
	RuntimeStringCmp (cmp_mode m=normal) : mode(m){
	}
	bool operator() (const string& s1,const string& s2) const {
		if(mode == normal)
		{
			return s1 < s2;
		}
		else
		{
			return lexicographical_compare(s1.begin(),s1.end(),s2.begin(),s2.end(),nocase_compare);
		}
 
	}

};

typedef map<string,string,RuntimeStringCmp> StringStringMap;
void fillAndPrint(StringStringMap &coll);


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	StringStringMap coll;
	fillAndPrint(coll);
	RuntimeStringCmp ignorecase(RuntimeStringCmp::nocase);
	StringStringMap coll2(ignorecase);
	fillAndPrint(coll2);
	
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void fillAndPrint(StringStringMap& coll)
{
	coll["Deutschland"] = "Germany";
	coll["deutsch"] = "German";
	coll["Haken"] = "snag";
	coll["arbeiten"] = "work";
	coll["Hund"] = "dog";
	coll["gehen"] = "go";
	coll["Unternehmen"] = "enterprise";
	coll["unternehmen"] = "undertake";
	coll["gehen"] = "walk";
	coll["Bestatter"] = "undertaker";
	StringStringMap::iterator pos;
	cout.setf(ios::left,ios::adjustfield);
	for(pos = coll.begin(); pos != coll.end();++pos)
	{
		cout << setw(15) << pos->first.c_str() << " " << pos->second << endl;
 	}
	cout << endl;

}
