#include <iostream>
#include <list>
#include <algorithm>
#include <vector>
#include <set>
#include "print.hpp"
int square (int value)
{
	return value*value;
}
int main()
{
	std::set<int> coll;
	std::vector<int> coll2;

	for(int i=1;i<=9;i++)
	{
		coll.insert(i);	
	
	}
	PRINT_ELEMENTS(coll,"initialized: ");
	std::transform(coll.begin(),coll.end(),std::back_inserter(coll2),square);
	PRINT_ELEMENTS(coll2,"squared:");
}
