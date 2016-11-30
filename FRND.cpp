#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	unsigned long long res=0;
	int n;
	int t[n];
	cin>> n;
	for(int i=0;i<n;i++)
		{
		cin>> t[i];
		}
	for(int i=0;i<n;i++)
		{
		for(int j=i+1;j<n;j++)
			{
			res+= (t[i] ^ t[j]);
			}
		}
	if(n==1) res = t[0];
	cout<< res;
	}
