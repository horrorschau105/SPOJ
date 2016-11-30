#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool sorting(pair <int, int> a, pair <int, int> b)
	{
	if(a.first < b.first) return true;
	if(a.first == b.first and a.second < b.second) return true;
	return false;
	}
bool operator ==(pair <int, int> a, pair <int, int> b)
	{
	if(a.first==b.first and a.second == b.second) return true;
	return false;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes;
	cin>> tes;
	vector <pair <int,int> > t;
	for(int qq=1;qq<=tes;++qq)
		{
		int N,R,a,b;
		cin>> N >> R;
		t.clear();
		for(int i=0;i<R;++i)
			{
			cin>> a >> b;
			t.push_back(make_pair(a,b));
			}
		sort(t.begin(), t.end(), sorting);
		t.push_back(make_pair(-1,-1));
		bool ok=true;
		for(int i=0;i<R and ok;++i)
			{
			if(t[i]==t[i+1] or t[i].first > N) ok = false;
			}
		if(ok) cout<< "Scenario #" << qq << ": possible " << endl;
		else cout<< "Scenario #" << qq << ": impossible " << endl;
		}
	}

