#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class PrintInt{
public: void operator()(int element)
	{
		cout << element << endl;	

	
	} 
};

int main()
{
	vector<int> coll;
	for(int i = 1; i<=9; i++)
	{
	
			coll.push_back(i);
	}
	
	for_each(coll.begin(),coll.end(),PrintInt());
	cout << endl;

	return 0;
}
