/*
 * =====================================================================================
 *
 *       Filename:  set2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月17日 22时33分35秒
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
#include <iterator>
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
		typedef multiset<int,greater<int> > Intset;
		Intset coll;

		coll.insert(4);
		coll.insert(3);
		coll.insert(5);
		coll.insert(1);
		coll.insert(6);
		coll.insert(2);
		coll.insert(5);

		Intset::iterator pos;
		for(pos=coll.begin();pos != coll.end(); ++pos)
		{
			cout << *pos << ' ';	
		}
		cout << endl;

		Intset::iterator ipos = coll.insert(4);
		cout << "4 inserted as element " << distance(coll.begin(),ipos) + 1 << endl;

		multiset<int> coll2(coll.begin(),coll.end());
		copy(coll2.begin(),coll2.end(),ostream_iterator<int>(cout," "));
		cout << endl;

		coll2.erase(coll2.begin(),coll2.find(3));

		int num;
		num = coll2.erase(5);
		cout << num << "element(s) removed" <<endl;

		copy(coll2.begin(),coll2.end(),ostream_iterator<int>(cout," "));
		cout << endl ;
		

						return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
