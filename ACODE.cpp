#include <iostream>
using namespace std;
bool do27(char s1, char s2)
	{
	if(10*(s1-48)+(s2-48)<27 && s1!='0') return 1;
	return 0;
	}
bool bez0(char s2)
	{
	if(s2=='0') return 0;
	return 1;
	}
int t[6000];
int main()
	{
	ios_base::sync_with_stdio(0);
	string s;
	cin>> s;
	while(s!="0")
		{
		t[0]=1;
		t[1]=1;
		for(int i=1;i<s.size();i++)
			{
			t[i+1]=0;
			if(bez0(s[i])) t[i+1]+=t[i];
			if(do27(s[i-1], s[i])) t[i+1]+=t[i-1];
			}
		cout<< t[s.size()] << endl;
		cin>> s;
		}
	}
