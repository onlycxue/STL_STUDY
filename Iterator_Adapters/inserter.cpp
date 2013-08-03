/*
 * =====================================================================================
 *
 *       Filename:  inserter.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年08月03日 10时16分41秒
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

int main()
{
	list<int> coll;
	back_insert_iterator<list<int> > back_iter(coll);
	*back_iter=1;
	back_iter++;
	*back_iter=2;

	front_insert_iterator<list<int> > front_iter(coll);
	*front_iter=3;
	front_iter++;
	*front_iter = 4;
	
	cout <<" *************list context***************" << endl;
	copy(coll.begin(),coll.end(),ostream_iterator<int>(cout," "));
	cout << endl;
	cout << "***************************************" << endl;

	list<int>::iterator pos;
	pos = coll.begin();
	cout <<"***************move +1********************"<<endl;

	advance(pos,1);
	cout << *pos << endl;
}
