#include <iostream>
using namespace std;
string tran(string in)
	{
	string res="";
	char lit[5]= {'m', 'a', 'n', 'k', 'u'};
	}
int main()
	{
	unsigned long long n;
	int tes;
	cin>> tes;
	while(tes--)
		{
		cin>> n;
		string res="";
		//if(n<6) res += char(n+48);
		while(n>0)
			{
			//if(n==5) res = '5'+res;
			res = char(48+n%5)+res;
			n/=5;
			}
		cout<< res << endl;
		}	
	}
