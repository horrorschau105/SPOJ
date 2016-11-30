#include <iostream>
#include <set>
using namespace std;
int main()
	{
	set <int> all, friends;
	int n,k,who;
	cin>> n;
	auto gowno = 1<<60;
	cout<< sizeof(gowno);
	while(n--)
		{
		cin>> who >> k;
		friends.insert(who);
		all.insert(who);
		while(k--)
			{
			cin>> who;
			all.insert(who);
			}
		}
	cout<< all.size() - friends.size() << endl;
	
	}

