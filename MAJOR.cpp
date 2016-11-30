#include <cstdio>
using namespace std;
int main()
	{
	int tes,n,q,maksik,co;
	scanf("%d", &tes);
	int count[4000];
	while(tes--)
		{
		scanf("%d", &n);
		for(int i=0;i<4000;++i) count[i]=0;
		for(int i=0;i<n;++i)
			{
			scanf("%d", &q);
			if(q<0) q = -q+2000;
			count[q]++;
			}
		co = -3244324;
		maksik = false;
		for(int i=0;i<4000 and not maksik;++i)
			{
			if(count[i]>n/2)
				{
				if(i>1000) co = -(i-2000);
				else co = i;
				maksik = true;
				break;
				}
			}
		if(maksik) printf("YES %d\n", co);
		else printf("NO\n");
		}
	}

