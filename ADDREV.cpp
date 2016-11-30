#include <iostream>
typedef unsigned long long ull;
using namespace std;
ull reversed(ull input)
	{
	ull result = 0;
	while(input>0)
		{
		result*=10;
		result+=input%10;
		input/=10;
		}
	return result;
	}
int main()
	{
	int t;
	ull a,b;
	cin >> t;
	while(t--)
		{
		cin>> a >> b;
		cout<< reversed(reversed(a)+reversed(b)) << endl;
		}
	}
