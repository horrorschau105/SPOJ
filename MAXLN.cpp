#include <cstdio>
using namespace std;
int main()
	{
	double in;
	int t;
	scanf("%d", &t);
	for(int i=1;i<=t;i++)
		{
		scanf("%lf", &in);
		printf("Case %d: %.2lf\n", i, 4*in*in + 0.25);
		}
	}
