#include <iostream>
#include <algorithm>
using namespace std;
int main()
	{
	int A,D,mini,count;
	int At[100];
	int De[100];
	cin>> A >> D;
	while(A>0 and D>0)
		{
		for(int i=0;i<A;++i) cin>> At[i];
		for(int i=0;i<D;++i) cin>> De[i];
		mini = 10000;
		count = 0;
		for(int i=0;i<A;++i) mini = min(mini, At[i]);
		sort(De, De+D);
		if(mini < De[1]) cout<< "Y\n";
		else cout << "N\n";
		cin>> A >> D;
		}
	}

