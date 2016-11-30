#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n,k;
	cin>> tes;
	while(tes--)
		{
		cin>> n >> k;
		int t[n];
		int minimum= (1<<30);
		for(int i=0;i<n;i++) cin>> t[i];
		sort(t, t+n);
		for(int i=k-1;i<n;i++) minimum = min(minimum, t[i]-t[i-k+1]);
		cout << minimum << endl;
		}
	}
