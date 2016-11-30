#include <iostream>
using namespace std;
int pot(int a,int b)
	{
	if(b==0) return a*a*a*a;
	if(b==1) return a;
	if(b==2) return a*a;
	if(b==3) return a*a*a;
	}
int main(){int t,a,b;cin>> t;
while(t--)
	{
	cin>>a>>b;
	a%=10;
	if(b==0) cout<< 1;
	else if(a==0) cout<< 0;
	else if(a==1)cout<< 1;
	else if(a==2) cout<< pot(2,b%4)%10;
	else if(a==3) cout<< pot(3,b%4)%10;
	else if(a==4&&b%2==0)cout<< 6;
	else if(a==4&&b%2==1)cout<< 4;
	else if(a==5)cout<<5;
	else if(a==6)cout<<6;
	else if(a==7) cout<< pot(7,b%4)%10;
	else if(a==8) cout<< pot(8,b%4)%10;
	else if(a==9&&b%2==0)cout<< 1;
	else if(a==9&&b%2==1)cout<< 9;
	cout<< endl;
	}
}
