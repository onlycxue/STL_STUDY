#include <iostream>
#include <list>
using namespace std;
int main()
{
	std::list<char> coll;
	for(char c = 'a';c <= 'z'; ++c)
	{
		coll.push_back(c);
	}
	while(! coll.empty())
	{
		std::cout << coll.front() << ' ';
		coll.pop_front();
	}
	std::cout << endl;
	return 0;
}
