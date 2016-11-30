#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	unsigned long long tes;
	cin>> tes;
	while(tes--)
		{
		unsigned long long in;
		char z;
		unsigned long long res;
		cin>> res >> z;
		while(z!= '=')
			{
			cin>> in;
			if(z=='+') res+=in;
			if(z=='-') res-=in;
			if(z=='*') res*=in;
			if(z=='/') res/=in;
			cin>> z;
			}
		cout<< res << endl;
		}
	}

