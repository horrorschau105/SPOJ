#include <iostream>
using namespace std;
int t[1000000];
int main()
	{
	ios_base::sync_with_stdio(0);
	long long n,c,curr=0,maks=0;
	cin>> n>> c;
	for(int i=0;i<n;i++) cin>> t[i];
	int it_back, it_front;
	it_back=it_front=0;
	while(it_front<n)
		{
		curr+=t[it_front];
		it_front++;
		while(curr > c)
			{
			curr-=t[it_back];
			it_back++;
			}
		maks = max(curr, maks);
		}
	cout<< maks << endl;
	}

