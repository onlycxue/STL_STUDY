/*
 * =====================================================================================
 *
 *       Filename:  predicates.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2013 08:52:18 PM
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
#include <iterator>

using namespace std;


/*
 * =====================================================================================
 *        Class:  Nth
 *  Description:  
 * =====================================================================================
 */
class Nth
{
		public:
				Nth (int n):nth(n),count(0){
				
				}                             /* constructor */
				bool operator() (int)
				{
					return ++count == nth;	
				}
		protected:


		private:
			int nth;
			int count;


}; /* -----  end of class Nth  ----- */

int main()
{
	list<int> coll;
	for(int i=1; i<=9; ++i)
	{
		coll.push_back(i);

	}
	cout << "coll element" << endl;
	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout," "));
	cout << endl;
	list<int>::iterator pos;
	pos = remove_if(coll.begin(),coll.end(),Nth(3));
	coll.erase(pos,coll.end());
	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout," "));
}
