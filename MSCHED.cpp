#include <queue>
#include <algorithm>
#include <cstdio>
using namespace std;

#define MAX 800000+10
pair <int,int> t[MAX];
bool sorting(pair <int,int> a, pair <int,int> b)
    {
	return a.second > b.second;
    }

int main() 
    {
    int n;
	scanf("%d", &n);
    for (int i = 0; i < n; i++)
        {
		scanf("%d", &t[i].first);
        scanf("%d", &t[i].second);
        //cin>> t[i].first >> t[i].second;
	    }
	sort(t, t + n, sorting);
	int curr = 0;
	int suma = 0;
	priority_queue<pair <int, int> > q;
	for (int time = 10000; time >= 1; time--) 
        {
		while(curr < n && time <= t[curr].second)
            {
            q.push(t[curr]);
			curr++;
	        }
		if(!q.empty()) 
            {
			suma += q.top().first;
			q.pop();
		    }
	}
    printf("%d", suma);
//    cout<< suma;
}

