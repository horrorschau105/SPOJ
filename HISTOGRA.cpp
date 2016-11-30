#include <iostream>
#include <stack>
using namespace std;
int main()
	{
	long long N, in;
	long long res=0;
	long long top;
	long long it;
	cin>> N;
		do{
		res = 0;
		stack <int> s;
		for(int i=0;i<N;++i)
			{
			cin>> in; 
			if(s.empty() || s.top()<=in) s.push(in);
			else
				{
				it = 0;
				while(!s.empty() && s.top()>in)
					{
					top = s.top();
					it++;
					res = max(res, it*top);
					s.pop();
					}
				s.push(in);
				res = max(res, it*in); // nie dziala na ciagach malejacych ;/
				}
			}
		it = 0;
		while(!s.empty())
			{
			top = s.top();
			it++;
			res = max(res, it*top);
			s.pop();
			}
		cout <<res << endl;
		cin>> N;
		}while(N>0);
	}

