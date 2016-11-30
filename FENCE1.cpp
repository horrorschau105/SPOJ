#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
	{
	int n;
	cin>> n;
	while(n>0)
		{
		double res = n*n / (2*M_PI);
		printf("%.2lf\n", res);
		cin>> n;
		}
	}
