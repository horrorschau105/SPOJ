#include <algorithm>
#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes;
	cin>> tes;
	long long in, res;
	while(tes--)
		{
		cin>> in;
		res = in/2;
		while(__gcd(in, res)>1) res--;
		cout<< res << endl;
		}
	}

