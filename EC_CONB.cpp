#include <iostream>
using namespace std;
long long reverse(int a)
	{
	long long res;
	string s="";
	while(a>0)
		{
		s = s + char(48+a%2);
		a/=2;
		}
	res=0;
	for(int i=0;i<s.size();i++)
		{
		res*=2;
		res+=(s[i]-48); 
		}
	return res;
	}
int main()
	{
	int n,a;
	cin>> n;
	for(int i=0;i<n;i++)
		{
		cin>> a;
		if(a%2) cout<< a << endl;
		else cout<< reverse(a) << endl;
		}
	}
