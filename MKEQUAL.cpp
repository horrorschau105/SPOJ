#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n,a;
	long long suma;
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		suma=0;
		for(int i=0;i<n;++i)
			{
			cin>> a;
			suma+=a;
			}
		if(suma%n==0) cout<< n << endl;
		else cout<< n-1 << endl;
		}
	}

