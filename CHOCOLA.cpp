#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool sorting(int a, int b)
	{
	return a>b;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int t;
	cin>> t;
	while(t--)
		{
		int a,b,c;
		cin>> a >> b;
		vector <int> x,y;
		for(int i=0;i<a-1;i++)
			{
			cin>> c;
			x.push_back(c);
			}
		for(int i=0;i<b-1;i++)
			{
			cin>> c;
			y.push_back(c);
			}
		sort(x.begin(),x.end(),sorting);
		sort(y.begin(),y.end(),sorting);
		int po_x,po_y;
		po_x=po_y=1;
		int suma=0;
		int i,j;
		i=j=0;
		while(i<a-1 || j<b-1)
			{
			//cout<< suma << endl;
			if(i<a-1 && j<b-1)
				{
				if(x[i]>y[j])
					{
					suma+=x[i]*(j+1);
					i++;
					}
				else
					{
					suma+=y[j]*(i+1);
					j++;
					}
				}
			else if(i==a-1)
				{// przepisz b do konca
				suma+=y[j]*(i+1);
				j++;	
				}
			else if(j==b-1)
				{
				suma+=x[i]*(j+1);
				i++;
				}
			}
		cout<< suma << endl;
		}
	}
