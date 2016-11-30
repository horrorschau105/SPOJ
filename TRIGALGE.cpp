#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int A, B, C;
long double f(long double x)
	{
	return A*x + B*sin(x) - C;
	}
const long double eps = 1e-6;
int main()
	{
	long double solution, old_solution, left_bank, right_bank;
	int tes;
	ios_base::sync_with_stdio(0);
	cin>> tes;
	while(tes--)
		{
		cin>> A >> B >> C;
		old_solution = left_bank = -100000000;
		solution = right_bank = 100000000;
		//cout<< A << B << C;
		while(abs(old_solution-solution) >= eps)
			{
			//cout<< left_bank << " " <<  right_bank << endl;
			old_solution = solution;
			solution = (left_bank+right_bank)/2;
			if(f(solution)*f(left_bank) < 0) right_bank = solution;
			else left_bank = solution;
			}
		printf("%Lf \n", solution);
		}
	}

