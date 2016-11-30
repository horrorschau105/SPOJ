#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
	{
	int r, N;
	cin>> r >> N;
	do	{
		double res = 1.0*r;
		res/= sin(acos(-1)/(2*N));
		printf("%.2lf\n", res);
		cin>> r >> N;
		}while(r!=0 || N!=0);
	
	}

