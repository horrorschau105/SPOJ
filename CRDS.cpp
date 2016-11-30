#include <iostream>
using namespace std;
int main()
	{
	unsigned long long n,res;
	ios_base::sync_with_stdio(0);
	int t;
	cin>> t;
	while(t--)
		{
		cin>> n;
		res=0;
		res+=(n-1)*(n)/2;
		//cout<< res << endl;
		res+=(n)*(n+1);
		cout<< res % 1000007 << endl;
		}
	}
