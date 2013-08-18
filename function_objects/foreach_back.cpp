/*
 * =====================================================================================
 *
 *       Filename:  foreach_back.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/18/2013 08:32:36 PM
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
#include <vector>
#include <iterator>
using namespace std;

/*
 * =====================================================================================
 *        Class:  MeanValue
 *  Description:  
 * =====================================================================================
 */
class MeanValue
{
		public:
				MeanValue ():num(0),sum(0){
				};                             /* constructor */
				void operator()(int elem)
				{
					num++;
					sum += elem;
				
				}
				double value()
				{
					return static_cast<double>(sum);	
				}

				/* ====================  ACCESSORS     ======================================= */

				/* ====================  MUTATORS      ======================================= */

				/* ====================  OPERATORS     ======================================= */

		protected:
				/* ====================  METHODS       ======================================= */

				/* ====================  DATA MEMBERS  ======================================= */

		private:
				long num;
				long sum;

}; /* -----  end of class MeanValue  ----- */

int main()
{
	vector<int> coll;
	for(int i=1; i<=8; ++i)
	{
		coll.push_back(i); 
	}
	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout," "));
	cout<< endl;
	MeanValue mv = for_each (coll.begin(),coll.end(),MeanValue());
	cout << "meanValue: " << mv.value() << endl;
}
