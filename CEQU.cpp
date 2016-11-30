#include<cstdio>
#include<cmath>
int max(int a,int b)
	{
	return a>b?a:b;
	}
int gcd(int m,int n)
	{
 	if(n==0) return m;
 	return gcd(n,m%n);
	}
int main()
	{
 	int a,b,c,t,g,e=1;
 	scanf("%d",&t);
 	while(t--)
	 	{
  		scanf("%d %d %d",&a,&b,&c);
  		g=gcd(a,b);
  		if(c%g==0 && c<=max(a,b)) printf("YES\n");
  		else printf("NO\n");
   		e++;
 		}
 	}

