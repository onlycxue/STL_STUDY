#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;
	for(int i = 0;i<=9;i++)
	{
		coll.push_back(i);	
	}
	
	list<int> coll1;
	for(int i =10; i<=20; i++)
	{
		coll1.push_back(i);	
	}
	copy(coll.begin(),coll.end(),front_inserter(coll1));

	list<int>::iterator it;
	for(it = coll1.begin();it != coll1.end(); it++)
	{
		cout << (*it) << endl;	
	
	}


}
