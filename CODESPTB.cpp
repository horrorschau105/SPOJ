#include <iostream>
using namespace std;
int t[100000+30];
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes,n;
	cin>> tes;
	while(tes--)
		{
		long long res=0;
		cin >> n;
		for(int i=0;i<n;i++) cin>> t[i];
		for(int i=1;i<n;i++)
			{
			int j=i;
			while(j>0 && t[j]<t[j-1])
				{
				swap(t[j], t[j-1]);
				res++;
				j--;
				}
			}
		cout<< res << endl;
		}
	}
