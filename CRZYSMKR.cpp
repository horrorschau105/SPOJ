#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	long long N;
	int tes;
	cin>> tes;
	while(tes--)
		{
		cin>> N;
		N%=11;
		//cout<< N << endl;
		N = (8*N)%11;
		//cout<< N << endl;
		for(int M=0;M<11;++M)
			{
			if((N+M)%11==0)
				{
				cout<< M << endl;
				break;
				}
			}
		}
	}

