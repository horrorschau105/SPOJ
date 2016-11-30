#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int n;
	string s;
	cin>> n >> s;
	bool A, B, C, D;
	char last='0';
	for(int i=0;i<2*n;i+=2) 
		{
		A=B=C=D=true;
		if(s[i]=='A' || s[i+1]=='A') A=false;
		if(s[i]=='B' || s[i+1]=='B') B=false;
		if(s[i]=='C' || s[i+1]=='C') C=false;
		if(s[i]=='D' || s[i+1]=='D') D=false;
		if(A&B)
			{
			if('A' == last) cout<< "BA";
			else 
				{
				cout<< "AB";
				last = 'B';
				}
			}
		if(A&C)
			{
			if('A' == last) cout<< "CA";
			else
				{
				cout<< "AC";
				last = 'C';
				}
			}
		if(A&D)
			{
			if('A' == last) cout<< "DA";
			else 
				{
				cout<< "AD";
				last = 'D';
				}
			}
		if(B&C)
			{
			if('B' == last) cout<< "CB";
			else 
				{
				cout<< "BC";
				last = 'C';
				}
			}
		if(B&D)
			{
			if('B' == last) cout<< "DB";
			else 
				{
				cout<< "BD";
				last = 'D';
				}
			}
		if(C&D)
			{
			if('C' == last) cout<< "DC";
			else 
				{
				cout<< "CD";
				last = 'D';
				}
			}
		}
	}

