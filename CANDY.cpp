#include <iostream>
using namespace std;
int t[300000];
int main()
	{
	int n,all,res;
	ios_base::sync_with_stdio(0);
	cin>> n;
	while(n>0)
		{
		all=res=0;
		for(int i=0;i<n;++i) 	
			{
			cin>> t[i];
			all+=t[i];
			}
		if(all%n) cout<< -1 << endl;
		else
			{
			all/=n;
			for(int i=0;i<n;++i)
				{
				if(t[i]>all) res+= t[i]-all;
				}
			cout<< res << endl;
			}
		cin>> n;
		}
	}

