#include <iostream>
#include <set>
#define N 600000
using namespace std;
int res[N];
set <int> s;
int main()
	{
	ios_base::sync_with_stdio(0);
	int a;
	res[0]=0;
	s.insert(0);
	for(int i=1;i<N;i++)
		{
		if(res[i-1]-i > 0 && s.find(res[i-1]-i)==s.end())  res[i] = res[i-1]-i;
		else res[i] = res[i-1]+i;
		s.insert(res[i]);
		}
	//for(int i=0;i<100;i++) cout<< res[i] << ' ';
	//cout<< res[10000]; 
	cin>> a;
	while(a>=0)
		{
		cout<< res[a] << endl;
		cin>> a;
		}
	}

