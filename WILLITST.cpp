// kod dobry, ale wychodzi n poza zakres, bo n<=10^14
#include <iostream>
#include <set>
using namespace std;
typedef unsigned long long ull;
ull f(ull n)
	{
	if(n%2==0) return n/2;
	return 3*n+3;
	}
bool stopped(ull n)
	{
	if(n==1) return 1;
	set <int> s;
	set <int>::iterator it;
	while(n>1)
		{
		s.insert(n);
		n = f(n);
		//cout<< n << " ";
		if(s.find(n)!=s.end()) return 0;
		}
	return 1;
	}
int main()
	{
	ull n;
	cin>> n;
	if(stopped(n)) cout<< "TAK" << endl;
	else cout<< "NIE" << endl;
	}
