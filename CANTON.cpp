#include <iostream>
using namespace std;

int main()
	{
	int t=0;
	cin>> t;
	while(t--)
		{
		long n;
		cin>> n;
		long group=1,count=0;
		for(long i=1;i<=n;i++)
			{
			count++;
			if(count==group and i!=n)	
				{
				group++;
				count=0;
				}
			}
		if((group)%2==0) cout<<"TERM "<<n<<" IS "<<count<<"/"<<group+1-count<<endl;
		else cout<<"TERM "<<n<<" IS "<<group+1-count<<"/"<<count<<endl;
		}
	}
