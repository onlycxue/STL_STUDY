/*
 * =====================================================================================
 *
 *       Filename:  generate.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2013 07:23:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <list>
#include <algorithm>
#include <stdlib.h>
#include <iterator>

using namespace std;


/*
 * =====================================================================================
 *        Class:  IntSequence
 *  Description:  
 * =====================================================================================
 */
class IntSequence
{
		public:
				/* ====================  LIFECYCLE     ======================================= */
				IntSequence (int initialValue):value(initialValue)                             /* constructor */
				{
				
				}
				int operator()()
				{
					return value=value+2;	
				}
				/* ====================  ACCESSORS     ======================================= */

				/* ====================  MUTATORS      ======================================= */

				/* ====================  OPERATORS     ======================================= */

		protected:
				/* ====================  METHODS       ======================================= */

				/* ====================  DATA MEMBERS  ======================================= */

		private:

				/* ====================  METHODS       ======================================= */
				int value;

				/* ====================  DATA MEMBERS  ======================================= */

}; /* -----  end of class IntSequence  ----- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
	list<int> coll;
	generate_n(back_inserter(coll),9,IntSequence(1));
	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout,"\n"));
	
	cout << "change:" << endl;
	generate(++coll.begin(),--coll.end(),IntSequence(42));

	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout,"\n"));

	
		return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
