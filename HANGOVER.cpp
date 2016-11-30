#include <iostream>
using namespace std;
int main()
	{
	double num;
	cin>> num;
	while(num>0)
		{
		int k=2;
		double sum = 0;
		while(num > sum)
			{
			sum += 1.0/k;
			k++;
			}
		cout<< k-2 << " card(s)" << endl; 
		cin>> num;
		}
	}
