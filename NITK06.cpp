#include <iostream>
using namespace std;
int t[10000000];
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		bool dummy = true;
		for(int i=0;i<n;++i) cin>> t[i];
		for(int i=1;i<n && dummy ;++i)
			{
			t[i]-=t[i-1];
			if(t[i]<0) dummy = false;
			}
		if(t[n-1]>0) dummy = false;
		if(dummy) cout<< "YES" << endl;
		else cout<< "NO" << endl;
		}
	}
