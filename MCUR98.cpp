#include <cstdio>
#define N 1000000
using namespace std;
bool t[N];
int d(int n)
	{
	int res = n;
	while(n>0)
		{
		res+=n%10;
		n/=10;
		}
	return res;
	}
int main()
	{
	for(int i=0;i<N;i++) t[i] = false;
	for(int i=0;i<N;i++)
		{
		t[d(i)] = true;
		}
	for(int i=0;i<N;i++)
		{
		if(!t[i]) printf("%d\n", i);
		}
	}

