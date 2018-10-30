#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		double pos; //记录每个需要移动的人的位置
		double ans = 0.0; //位置的总和
		for (int i = 1; i < n; i++)
		{
			pos = i * 1.0 / n * (n + m);
			ans += fabs(pos - floor(pos + 0.5)) / (n + m);
		}
		printf("%.4lf\n", ans * 10000);
	}
	return 0;
}