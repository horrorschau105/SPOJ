#include <iostream>
#include <vector>
#include <algorithm>
#define way 1422
#define range 200
using namespace std;
int main()
	{
	vector <int> t;
	int n,a;
	cin>> n;
	while(n>0)
		{
		t.clear();
		for(int i=0;i<n;i++)
			{
			cin>> a;
			t.push_back(a);
			}
		t.push_back(0);
		t.push_back(1422);
		sort(t.begin(), t.end());
		bool ok=true;
		for(int i=1;i<t.size() && ok;i++)
			{
			if(t[i]-t[i-1]>range) ok=false;
			}
		if(t[t.size()-1]-t[t.size()-2]>range/2) ok=false;
		if(ok) cout<< "POSSIBLE" << endl;
		else cout<< "IMPOSSIBLE" << endl;	 
		//cout<< t[0] << endl;
		cin>> n;
		}
	}
