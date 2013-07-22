/*
 * =====================================================================================
 *
 *       Filename:  map1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月22日 11时23分12秒
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
	typedef map<string,float> StringFloatMap;
	StringFloatMap stocks;
	stocks["BASF"] = 369.50;
	stocks["VW"] = 205.30;
	stocks["Xue"] = 405.30;
	stocks["Chao"] = 9999.90;
	
	for(StringFloatMap::iterator it = stocks.begin(); it != stocks.end(); it++)
	{
		cout <<"stock: " <<  it->first << "\t";
		cout << "price: " << it->second << endl; 
	} 
	cout << endl;
	
	for(StringFloatMap::iterator it = stocks.begin(); it != stocks.end(); it++)
	{
		it->second *= 2;
	}

	for(StringFloatMap::iterator it = stocks.begin(); it != stocks.end(); it++)
	{
		cout << "stock : " << it->first << "\t" ;
		cout << "price: "  << it->second << endl;
	}
	
	cout << endl;
	stocks["Volkswagen"] = stocks["VW"];
	stocks.erase("VW");

	for(StringFloatMap::iterator it = stocks.begin(); it != stocks.end(); it++)
	{
		cout << "stock : " << it->first << "\t" ;
		cout << "price: "  << it->second << endl;
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

