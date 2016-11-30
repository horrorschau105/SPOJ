#include <iostream>
#include <algorithm>
#define N 30000
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	int t[N], sum[N];
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		for(int i=0;i<n;++i)
			{
			cin>> t[n-i-1];
			}
	//	cout << t[0] << endl;
		sum[n-1] = t[n-1];
		for(int i=n-2;i>=0;--i)
			{
			sum[i] = sum[i+1]+t[i];
			}
	//	cout<< sum[0] << endl;
		long long res=0;
		for(int i=0;i<n;++i)
			{
			res+= (n-1-i)*t[i];
			if(i!=n-1) res-= sum[i+1];
			}
		cout<< res << endl;
		}
	
	}

