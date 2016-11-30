#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int n,a,t;
	cin>> n;
	a=0;
	for(int i=0;i<n;i++)
		{
		cin>> t;
		a = a^t;
		}
	cout<< a;
	}
