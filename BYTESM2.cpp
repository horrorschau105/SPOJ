#include <iostream>
using namespace std;
int t[110][110];
int main()
	{
	int tes,a,b;
	cin>> tes;
	while(tes--)
		{
		cin>> a >> b;
		for(int i=0;i<a;i++)
			{
			for(int j=0;j<b;j++)
				{
				cin>> t[i][j];
				}
			} 
		for(int i=1;i<a;i++)
			{
			for(int j=0;j<b;j++)
				{
				if(j==0) t[i][j]+=max(t[i-1][j], t[i-1][j+1]);
				else if(j==b-1) t[i][j]+=max(t[i-1][j], t[i-1][j-1]);
				else t[i][j]+=max(t[i-1][j+1], max(t[i-1][j], t[i-1][j-1]));
				}
			}
		int res=t[a-1][0];
		for(int i=1;i<b;i++) res = max(res, t[a-1][i]);
		cout<< res << endl;
		}
	}
