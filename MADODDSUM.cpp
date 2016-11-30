#include <iostream>
using namespace std;
long long sq(long long a)
	{
	return a*a;
	}
int main()
	{while(true){
	long long a,b;
	cin>> a >> b;
	if(!b%2) b--; // jak parzysta, to zmniejsz o 1
	if(!a%2) a++;
	cout<< (b/2-a/2+1)*((b+a)/2)  << endl; 
	}}
	// gowno
