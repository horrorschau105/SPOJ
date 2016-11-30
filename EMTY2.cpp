#include <iostream>
#define N 200000
using namespace std;
int t[N];
int main()
	{
	ios_base::sync_with_stdio(0);
	int tes;
	cin>> tes;
	string s;
	int it=-1;
	bool ok=1;
	for(int q=1;q<=tes;q++)
		{
		cin>> s;
		fill(t, t+N, 0);
		ok= s[0]=='1'?1:0;
		it=-1;
		for(int i=0;i<s.size() && ok;++i)
			{
		//	cout<< it << ":\n";
			if(s[i]=='1') it++;
			else
				{
				if(it<0) ok=0;
				else
					{
					t[it]++;
					if(t[it]==2)
						{
						t[it]=0;
						it--;
						}
					else;		
					}
				}
			}
		if(it>=0 || !ok) cout<<"Case " << q << ": " << "no" << endl;
		else cout <<"Case " << q << ": " << "yes" << endl;
		
		//cout<< "Case " << q << ": " << (it>=0 || !ok)?"no\n":"yes\n";
		}
	}

