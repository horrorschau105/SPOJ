#include <iostream>
#include <stack>
using namespace std;
int main()
	{
	int t,n;
	cin>> t;
	while(t--)
		{
		cin>> n;
		int how_many_twos = 0;
		int how_many_fives = 0;
		int divisor = 2;
		while(divisor <= n)
			{
			how_many_twos += n/divisor;
			divisor*=2;
			}
		divisor = 5;
		while(divisor <= n)
			{
			how_many_fives += n/divisor;
			divisor*=5;
			}
		cout<< min(how_many_twos, how_many_fives) << endl;
		}
	}
