#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
	list<int> coll;
	list<int>::iterator pos;
	for(int i=20;i<=40;i++)
	{
		coll.push_back(i);	
	
	}

	pos = find(coll.begin(),coll.end(),3);
	reverse(pos,coll.end());
	
	list<int>::iterator pos25,pos35;
	pos25 = find(coll.begin(),coll.end(),85);
	pos35 = find(coll.begin(),coll.end(),35);
	//cout << "max :" << *max_element(pos25,pos35) << endl;
	//cout << "max :" << *max_element(pos25,++pos35) << endl;

	return 0;
}