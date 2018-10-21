#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	while (scanf("%d", &n) == 1 && n!=0)
	{
		int x1, y1, x2, y2;
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		int T = n - 2;
		int x3, y3;
		double s = 0;
		while (T--)
		{
			scanf("%d%d", &x3, &y3);
			s += ((x1 - x2)*(y1 - y3) - (x1 - x3)*(y1 - y2))*1.0/2;
			x2 = x3;
			y2 = y3;
		}
		printf("%.1f\n",abs(s));
	}
	return 0;
}