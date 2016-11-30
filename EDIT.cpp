#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	int low,up;
	string s;
	while(cin>> s)
		{
		low = up = 0;
		for(int i=0;i<s.size();++i)
			{
			if(i%2==0 && s[i] < 'a') low++;
			if(i%2==1 && s[i] >= 'a') low++;
			if(i%2==1 && s[i] < 'a') up++;
			if(i%2==0 && s[i] >= 'a') up++;
			}
		cout<< min(up, low) << endl;
		}
	}

