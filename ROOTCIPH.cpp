#include<iostream>
using namespace std;
int main()
	{
	long long tes,a,b,c;
	cin>> tes;
	while(tes--)
		{
		cin>> a >> b >> c;
		unsigned long long res = a*a - 2*b;
		cout<< res << endl;
		}
	}
