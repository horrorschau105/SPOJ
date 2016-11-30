#include <iostream>
using namespace std;
string f(int a)
	{
	string res;
	if(a==0) return "10";
	if(a<10)
		{
		char z=a+48;
		res+=z;
		return res;
		}
	int div=9;
	while(div>1)
		{
		if(a%div==0)
			{
			res=char(div+48)+res;
			a/=div;
			}
		else div--;
		}
	if(a>1) return "-1";
	return res;
	}
int main()
	{
	ios_base::sync_with_stdio(0);
	int ilosc,a;
	cin>> ilosc;
	while(ilosc>0)
		{
		cin>> a;
		cout<< f(a) << endl;
		ilosc--;
		}
	}
	
/*


*/

