#include <iostream>
using namespace std;
int t[1100][1100];
int main()
	{
	ios_base::sync_with_stdio(0);
	int a,b;
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
			if(j==0) t[i][j]+=min(t[i-1][j], t[i-1][j+1]);
			else if(j==b-1) t[i][j]+=min(t[i-1][j], t[i-1][j-1]);
			else t[i][j]+=min(t[i-1][j+1], min(t[i-1][j], t[i-1][j-1]));
			}
		}
	int res=t[a-1][0];
	for(int i=1;i<b;i++) res = min(res, t[a-1][i]);
	cout<< res << endl;
	}
