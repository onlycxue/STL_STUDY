/*
 * =====================================================================================
 *
 *       Filename:  list.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月14日 23时02分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Cxue 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>

using namespace std;

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  printLists
 *  Description:  
 * =====================================================================================
 */
		void
printLists (const list<int>& l1,const list<int>& l2 )
{
		cout << "list1:";
		copy(l1.begin(),l1.end(),ostream_iterator<int>(cout," "));
		cout << endl << "list2:";
		copy(l2.begin(),l2.end(),ostream_iterator<int>(cout," "));
		cout << endl << endl;
		
}		/* -----  end of function printLists  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		list<int> list1,list2;
		for (int i=0;i<6;++i)
		{
			list1.push_back(i);
			list2.push_front(i);
		
		}
		printLists(list1,list2);
		list2.splice(find(list2.begin(),list2.end(),3),list1);
		printLists(list1,list2);
		list2.splice(list2.end(),list2,list2.begin());
		printLists(list1,list2);
		list2.sort();
		list1 = list2;
		list2.unique();
		printLists(list1,list2);
		list1.merge(list2);
		printLists(list1,list2);

		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
