#include <iostream>
#include <cmath>
using namespace std;
int main()
	{
	int R,B;
	cin>> R >> B;
	cout<< ((4+R)+sqrt((R-4)*(R-4)-16*B))/4 << " ";
	cout<< ((4+R)-sqrt((R-4)*(R-4)-16*B))/4 << endl;
	}

