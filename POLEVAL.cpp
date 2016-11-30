#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int t[100000];
	int n,a,k,it;
	cin>> n;
	it=0;
	while(n>=0)
		{
		it++;
		cout<< "Case " << it <<":" << endl; 
		for(int i=0;i<n+1;i++)
			{
			cin>> t[i];
			} // wspolczynniki wielomianu
		cin>> k; // ile punktow do wyliczenia
		for(int i=0;i<k;i++)
			{
			long long res=0;
			cin >> a; // punkt mamy taki
			for(int j=0;j<=n;j++)
				{
				res*=a;
				res+=t[j];
				}
			cout<< res << endl; 
			}
		cin>> n;
		}
	}
