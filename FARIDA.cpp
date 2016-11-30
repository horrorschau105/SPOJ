#include <cstdio>
long long max(long long a, long long b)
	{
	return a>=b?a:b;
	}
using namespace std;
int main()
	{
	int tes,n;
	scanf("%d", &tes);
	for(int q=1;q<=tes;++q)
		{
		printf("Case %d: ", q);
		scanf("%d", &n);
		if(n==0) printf("0\n");
		else if(n==1)
			{
			scanf("%lld", &n);
			printf("%lld\n", n);
			}
		else
			{
			long long smok[n+5], res[n+5],rez;
			for(int i=0;i<n;++i) scanf("%lld", &smok[i]);
			for(int i=0;i<n;++i) res[i]=0;
			res[0]=smok[0];
			res[1]=smok[1];
			for(int i=2;i<n;++i)
				{
				for(int j=0;j<i-1;++j)
					{
					res[i] = max(res[i], res[j]+smok[i]);
					}
				}
			rez=max(res[n-1], res[n-2]);
			printf("%lld\n", rez);
			}
		}
	}

