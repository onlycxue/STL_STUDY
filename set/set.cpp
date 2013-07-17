/*
 * =====================================================================================
 *
 *       Filename:  set.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月17日 21时35分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <set>

using namespace std;

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		set<int> c;
		c.insert(1);
		c.insert(2);
		c.insert(3);
		c.insert(4);
		c.insert(5);
		c.insert(6);

		cout << "lower_bound(3): " << *c.lower_bound(3) << endl;
		cout << "upper_bound(3): " << *c.upper_bound(3) << endl;

		cout << "equal_bound(3): " << *c.equal_range(3).first << " " << *c.equal_range(3).second << endl;

		cout << endl;

		cout << "lower_bound(5): " << *c.lower_bound(5) << endl;
		cout << "upper_bound(5): " << *c.upper_bound(5) << endl;
		cout << "equal_bound(5): " << *c.equal_range(5).first << " " << *c.equal_range(5).second << endl;
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
