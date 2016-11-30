#include <algorithm>
#include <cstdio>
using namespace std;
bool sorting(pair <int, int> a, pair <int, int> b)
	{
	if(a.second < b.second) return true;
	else if(a.second == b.second)
		{
		if(a.first > b.first) return true;
		return false;
		}
	return false;
	}
int main()
	{
	int tes, n,a,b;
	pair <int, int> t[200000];
	scanf("%d", &tes);
	while(tes--)
		{
		scanf("%d", &n);
		for(int i=0;i<n;++i)
			{
			scanf("%d%d", &a, &b);
			t[i] = make_pair(a,b);
			}
		sort(t,t+n,sorting);
		//cout<< t[0].first;
		int curr=0;
		int count=0;
		for(int i=0;i<n;)
			{
			curr = t[i].second;
			count++;
			while(i<n and t[i].first < curr) ++i;
			}
		printf("%d\n", count);
		}
	}

