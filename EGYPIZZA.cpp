#include <iostream>
using namespace std;
int main()
	{
	int n;
	string s;
	int one4, one2, three4;
	one4 = one2 = three4 =0;
	cin>> n;
	for(int i=0;i<n;++i)
		{
		cin>> s;
		if(s=="1/4") one4++;
		else if(s=="1/2") one2++;
		else three4++;
		}
	int res =1;
	if(three4 >= one4)
		{
		res+=three4;
		three4=one4=0; // do 3/4 wiecej nie wcisniemy
		res+=one2/2+one2%2;
		}
	else
		{
		res+=three4;
		one4-=three4;
		three4=0;
		// zostaly same polowki i cwiartki
		res+=one2/2;
		if(one2%2==1)
			{
			if(one4>=2)
				{
				res+=1;
				one4-=2;
				}
			else
				{
				res+=1;
				one4=one2=0;
				}
			}
		// nie ma zadnych polowek juz
		res+=one4/4;
		res+= one4%4>0? 1:0;
		}
	cout<< res << endl;
	}

