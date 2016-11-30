#include <iostream>
using namespace std;
int main()
	{
	int t,n;
	unsigned long long res;
	cin>> t;
	while(t--)
		{
		cin>> n;
		res= 1;
		res*= n;
		res*= (n+2);
		res*= (2*n+1);
		res/=8;
		cout<< res << endl; // nope
		}
	}
