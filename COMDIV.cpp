#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,a,b;
	cin>> tes;
	while(tes--)
		{
		cin>> a >> b;
		int nwd = __gcd(a,b);
		int div =1;
		for(int i=2;i<=nwd;++i)
			{
			if(a%i == 0 and b%i == 0) div++;
			}
		cout<< div<< endl;
		}
	}

