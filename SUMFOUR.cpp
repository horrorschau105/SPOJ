#include <cstdio>
#include <map>
#include <vector>
using namespace std;
int main()
	{
	int N;
	scanf("%d", &N);
	int in[N][4];
	for(int i=0;i<N;++i)
		{
		scanf("%lld %lld %lld %lld", &in[i][0], &in[i][1], &in[i][2], &in[i][3]);
		}
	map <int, int> sett;
	vector <int> v;
	int toadd;
	for(int i=0;i<N;++i)
		{
		for(int j=0;j<N;++j)
			{
			toadd = in[i][0] + in[j][1];
			v.push_back(toadd);
			}
		}
	for(int i=0;i<N;++i)
		{
		for(int j=0;j<N;++j)
			{
			toadd = in[i][2] + in[j][3];
			if(sett.find(toadd)!=sett.end()) sett[toadd]++;
			else sett[toadd]=1;
			}
		}
	int res=0;
	for(int i=0;i<v.size();++i)
		{
		if(sett.find(-v[i])!=sett.end()) res+=sett[-v[i]];
		}
	printf("%d\n", res);
	}// ciut za wolne

