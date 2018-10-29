#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{	
	double x[4];
	double y[4];
	double x1, y1, x2, y2;
	while (scanf("%lf%lf%lf%lf",&x1, &y1, &x2, &y2) == 4)
	{
		double x3, y3, x4, y4;
		scanf("%lf%lf%lf%lf", &x3, &y3, &x4, &y4);
		if (max(x1, x2) <= min(x3, x4) || max(x3, x4) <= min(x1, x2))
		{
			printf("0.00\n");
			continue;
		}
		if (max(y1, y2) <= min(y3, y4) || max(y3, y4) <= min(y1, y2))
		{
			printf("0.00\n");
			continue;
		}
		x[0] = x1;  y[0] = y1;
		x[1] = x2;  y[1] = y2;
		x[2] = x3;  y[2] = y3;
		x[3] = x4;  y[3] = y4;
		sort(x, x + 4);
		sort(y, y + 4);
		double area = abs((x[2] - x[1])*(y[2] - y[1]));
		printf("%.2f\n", area);
	
	}

	return 0;
}