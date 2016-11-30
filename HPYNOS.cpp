#include <iostream>
#include <set>
using namespace std;
int sqsum(unsigned int N)
	{
	int res=0;
	int div;
	while(N>0)
		{
		div = N%10;
		res+= div*div;
		N/=10;
		}
	return res;
	}
int main()
	{
	unsigned int N;
	int steps =0;
	cin >> N;
	set <unsigned int> s;
	while(N!=1)
		{
		if(s.find(N) != s.end()) 
			{
			cout<< "-1";
			return 0;
			}
		else
			{
			s.insert(N);
			N = sqsum(N);
			steps++;
			}	
		}
	cout<< steps << endl;
	}

