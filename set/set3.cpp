/*
 * =====================================================================================
 *
 *       Filename:  set3.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年07月18日 20时26分26秒
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
#include "print.hpp"

using namespace std;

/*
 * =====================================================================================
 *        Class:  RuntimeCmp
 *  Description:  
 * =====================================================================================
 */
template < class T >
class RuntimeCmp
{
		public:
				enum cmp_mode {normal,reverse};
				
				RuntimeCmp (cmp_mode m=normal):mode(m)
				{
						
				}
				bool operator() (const T& t1,const T& t2) const
				{
					return mode == normal ? t1 < t2 : t2 < t1;	
				}	
				bool operator== (const RuntimeCmp& rc)
				{
					return mode == rc.mode;	
				}
		protected:

		private:
			cmp_mode mode;

}; /* ----------  end of template class RuntimeCmp  ---------- */
typedef set<int,RuntimeCmp<int> > IntSet;
void fill (IntSet& set);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
		int
main ( int argc, char *argv[] )
{
		IntSet coll1;
		fill(coll1);
		PRINT_ELEMENTS(coll1,"coll1:");
		RuntimeCmp<int> reverse_order(RuntimeCmp<int>::reverse);
		IntSet coll2(reverse_order);
		fill(coll2);
		PRINT_ELEMENTS (coll2, "coll2:");

		coll1 = coll2;
		coll1.insert(3);
		PRINT_ELEMENTS (coll1,"coll1:");

		if(coll1.value_comp() == coll2.value_comp()){
				cout << "coll1 and coll2 have same sorting criterion" <<endl;
		}
		else
		{
				cout << "coll1 and coll2 have different sorting criterion" << endl;

		}
		return 0;
}				/* ----------  end of function main  ---------- */

void fill (IntSet& set)
{
	set.insert(4);
	set.insert(7);
	set.insert(5);
	set.insert(1);
	set.insert(6);
	set.insert(2);
	set.insert(5);
}


