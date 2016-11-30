#include <iostream>
typedef unsigned long long ull;
using namespace std;
ull square(int n)
	{
	return (ull)n*n;
	}
ull count(int n)
	{
	return (ull) n*(n+1)*(2*n+1)/6;
	}
int main()
	{
	int n;
	cin>> n;
	while(n>0)
		{
		cout<< count(n) << endl;
		cin>> n;
		}
	}
