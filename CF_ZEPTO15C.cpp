#include <iostream>
using namespace std;
int main()
	{
	int t;
	ios_base::sync_with_stdio(0);
	long long n, Hr, Hb, Wr, Wb, result;
	cin>> t;
	// ile, happy_res, happy_blue, weight_red, weight_blue
	while(t--)
		{
		result = 0;
		cin >> n >> Hr >> Hb >> Wr >> Wb;
		// bierzemy iles tam czerwonych i dopychami niebieskimi
		for(int i=0;i<500000;i++) 
			{
			if(Wr*i <= n) result = max(result, Hr*i + (n - Wr*i)/Wb * Hb);
			else break;
			}
		// na odwrot
		for(int i=0;i<500000;i++) 
			{
			if(Wb*i <= n) result = max(result, Hb*i + (n - Wb*i)/Wr * Hr);
			else break;
			}
		cout<<result << endl;	
		}
	}
