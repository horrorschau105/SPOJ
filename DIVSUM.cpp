#include <iostream>
using namespace std;
int summ(int n)
	{
	if(n==1) return 0;
	int res=1;
	int i=2;
	for(;i*i<n;++i)
		{
		if(n%i==0) 
			{
			res+=i;
			res+=n/i;
			}
		}
	if(i*i==n) res+=i;
	return res;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		cout<< summ(n) << endl;
		}
	}

