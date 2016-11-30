#include <iostream>
using namespace std;
int main()
	{
	int a,b,c;
	cin>> a >> b >> c;
	while(a!=0 or b!=0 or c!=0)
		{
		if(b-a == c-b) cout << "AP " << c-b+c << endl;
		else cout<< "GP " << c*c/b << endl;
		cin>> a >> b >> c;
		}
	}

