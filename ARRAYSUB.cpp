#include <deque>
#include <iostream>
using namespace std;
int main()
	{
	ios_base::sync_with_stdio(0);
	deque <int> Q;
	int n,k;
	cin>> n;
	int t[n];
	for(int i=0;i<n;i++) cin>> t[i];
	cin>> k;
	int res[n-k+1];
	for(int i=0;i<k;++i)
		{
		while(!Q.empty() and t[i] >= t[Q.back()]) Q.pop_back();
		Q.push_back(i); // tak naprawde po calej petli tutaj jest tylko max na <0,k>
		}
	for(int i=k;i<n;++i)
		{
		res[i-k] = t[Q.front()];
		while(!Q.empty() and t[i] >= t[Q.back()]) Q.pop_back(); // i dopychamy, wiec mniejsze precz
		while(!Q.empty() and Q.front() <=i-k) Q.pop_front(); // za male indeksy tez
		Q.push_back(i);
		}
	res[n-k] = t[Q.front()];
	for(int i=0;i<n-k+1;i++) cout<< res[i] << " ";
	}

