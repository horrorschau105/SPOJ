#include <iostream>
#include <stack>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int t[100000];
	int n,ile;
	cin>> n;
	while(n>0)
		{
		for(int i=0;i<n;i++)
			{
			cin>> t[i];
			}
		stack <int> s;
		int curr = 1;
		for(int i=0;i<n;i++)
			{
			if(t[i]!= curr)
				{
				s.push(t[i]);
				//cout<< "na stos: " << t[i] << endl;
				}
			else curr++;
			while(!s.empty() && curr==s.top())
				{
				curr++;
				//cout<< "ze stosu: " << s.top() << endl;
				
				s.pop();
				}
			}
		if(!s.empty()) cout<< "no" << endl;
		else cout<< "yes" << endl;
		cin>> n;
		}
	}
