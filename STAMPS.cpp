#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int t[1000000];
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes, ile, n;
	cin>> tes;
	for(int qq=0;qq<tes;qq++)
		{
		cout<< "Scenario #" << qq+1 << ':' << endl;
		cin>> ile >> n;
		for(int i=0;i<n;i++) cin>> t[i];
		sort(t, t+n);
		int j=n-1;
		while(j>=0 && ile>0)
			{
			ile-=t[j];
			j--;
			}
		if(ile>0) cout<< "impossible" << endl << endl;
		else cout << n-1-j << endl << endl;
		}
	}

