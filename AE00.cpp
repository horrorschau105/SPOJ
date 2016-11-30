#include <iostream>
using namespace std;
int main()
	{
	int n;
	long long res=0;
	cin>> n;
	for(int i=1;n/i-(i-1)>0;i++)
		{
		res+=n/i-(i-1);
		}
	cout<< res << endl;
	}
