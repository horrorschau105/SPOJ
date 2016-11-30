#include <iostream>
#include <algorithm>
using namespace std;
bool sorting(long long a, long long b)
	{
	if(a>b) return true;
	return false;
	}
long long a[1000000], b[1000000];
int main()
	{
	ios_base::sync_with_stdio(0);
	long long t,n,sum;
	cin >> n;
	while(n>0)
		{
		
		sum = 0;
		for(int i=0;i<n;i++) cin>> a[i];
		for(int i=0;i<n;i++) cin>> b[i];
		sort(a, a+n, sorting);
		sort(b, b+n);
		for(int i=0;i<n;i++) sum+=a[i]*b[i];
		cout<< sum << endl;
		cin>> n;
		}
	}
