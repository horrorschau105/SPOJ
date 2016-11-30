#include <iostream>
using namespace std;
int t[1010101];
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	long long res, curr;
	cin>> tes;
	for(int i=0;i<tes;++i)
		{
		cin>> n;
		res = 1;
		for(int j=0;j<n;++j) cin>> t[j];
		curr = 1;
		for(int j=0;j<n;++j)
			{
			curr+=t[j];
			if(curr <= 0) 
				{
				res+= (-curr+1);
				curr = 1;
				}
			}
		cout<< "Scenario #" << i+1 << ": " << res << endl;
		}
	}

