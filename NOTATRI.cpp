#include <iostream>
#include <set>
using namespace std;
int t[5000];
int main()
	{
	int N,a;
	long long res=0;
	cin>> N;
	while(N>0)
		{
		set <int> s;
		for(int i=0;i<N;++i)
			{
			cin>> t[i];
			s.insert(t[i]);
			}
		for(int i=0;i<N;++i)
			{
			for(int j=i+1;j<N;++j)
				{
				//cout<< s.end() << " " << s.lower_bound(t[i]+t[j]) << endl;
				res+=s.distance(s.lower_bound(t[i]+t[j]),s.end());
				}
			}
		cout << res << endl;
		cin>> N;
		}
	}

