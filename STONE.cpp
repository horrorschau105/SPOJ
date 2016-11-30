#include <cstdio>
#include <cmath>
using namespace std;
int main()
	{
	int x[1000001], y[1000001];
	int tes, n;
	scanf("%d", &tes);
	for(int iterator = 1; iterator <= tes; iterator++)
		{
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d %d", &x[i], &y[i]);
		x[n] = x[0];
		y[n] = y[0];
		double cx = 0, cy = 0, area = 0;
		for (int i = 0; i < n; i++) 
			{
			double w = x[i] * y[i+1] - x[i+1] * y[i];
			area += w;
			cx += w * (x[i] + x[i+1]) / 3;
			cy += w * (y[i] + y[i+1]) / 3;
			}
		cx /= area;
		cy /= area;
		if (fabs(cx) < 0.005) cx = 0; // bez tego nie wchodzi xD
		if (fabs(cy) < 0.005) cy = 0;
		printf("%.2f %.2f\n", cx,cy);
		}
	}
