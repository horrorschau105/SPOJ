#include <iostream>
#include <map>
using namespace std;
int main()
	{
	string a,b;
	int c,d;
	map <string, int> t;
	int tes;
	cin>> tes;
	while(tes--)
		{
		t.clear();
		for(int i=0;i<16;++i)
			{
			cin>> a >> b >> c >>d;
			if(c<d)
				{
				if(t.find(b)!=t.end()) t[b]++;
				else t[b]=1;
				}
			else
				{
				if(t.find(a)!=t.end()) t[a]++;
				else t[a]=1;	
				}
			}
		for(map<string,int>::iterator i=t.begin();i!=t.end();++i)
			{
			if(i->second == 4)
				{
				cout<< i->first << endl;
				break;
				}
			}
		}
	}

