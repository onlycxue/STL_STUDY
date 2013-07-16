#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;
	vector<int> coll2;

	for(int i = 1;i <= 9; i++)
	{
		coll.push_back(i);
	
	}

	coll2.resize(coll.size());
	copy (coll.begin(),coll.end(),coll2.begin());

	deque<int> coll3(coll.size());
	copy (coll.begin(),coll.end(),coll3.begin());


	return 0;
}

