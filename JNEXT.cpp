#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	int t,n;
	cin>> t;
	while(t--)
		{
		cin>> n;
		int l[n];
		for(int i=0;i<n;i++)
			{
			cin>> l[i];
			}
		bool ok=0;
		
		if(next_permutation(l, l+n)) 
			{ 
			for(int i=0;i<n;i++) cout<< l[i];
			cout<< endl;
			}
		else cout<< -1 << endl;
		}
	}
