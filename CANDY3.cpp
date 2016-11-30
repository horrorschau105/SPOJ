#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes;
	cin>> tes;
	while(tes--)
		{
		unsigned long long n,a;
		unsigned long long sum=0;
		cin>> n;
		for(unsigned long long i=0;i<n;i++)
			{
			cin>> a;
			sum+=a;
			sum%=n;
			}
		if(sum==0) cout<< "YES" << endl;
		else cout<< "NO" << endl;
		}
	}
