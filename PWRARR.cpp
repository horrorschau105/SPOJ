#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
	{
	int tes;
	int n;
	int t[100000];
	scanf("%d", &tes);
	long long toadd;
	while(tes--)
		{
		scanf("%d", &n);
		for(int i=0;i<n;++i) scanf("%d", &t[i]);
		sort(t,t+n);
		t[n]=-1;
		int ile;
		long long res=0;
		for(int i=0;i<n;++i)
			{
			ile=1;
			while(t[i]==t[i+1])
				{
				++ile;
				++i;
				}
			toadd = ile;
			toadd*=(i+1);
			res+=toadd;
			}
		printf("%lld\n", res);
		}
	}
