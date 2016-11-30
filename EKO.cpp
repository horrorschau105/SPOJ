#include <iostream>
#include <algorithm>
using namespace std;
int hi[1200000];
int f(int hei,int n)
	{
	int res=0;
	for(int i=0;i<n;++i) res+=max(0, hi[i]-hei);
	return res;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int n,wood, upbound, lowbound;
	cin>> n >> wood;
	upbound=0;
	for(int i=0;i<n;++i)
		{
		cin>> hi[i];
		upbound=max(upbound, hi[i]);	
		}
	lowbound=0;
	sort(hi,hi+n);
	int mid;
	int cut;
	while(lowbound<upbound)
		{
		mid = lowbound+upbound;
		mid/=2;
		cut = f(mid,n);
	//	cout<< mid << " " << cut<< endl;
		if(cut==wood) break;
		else if(cut < wood) upbound = mid+1;
		else lowbound = mid-1;
		}
	cout<< mid <<endl;
	}

