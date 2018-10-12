#include<iostream>
#include<algorithm>
using namespace std;
double f(int i);
int main()
{
	int m;
	scanf("%d", &m);
	while (m--)
	{
		int n;
		scanf("%d", &n);
		double sum=0;
		int t=1;
		for (int i = 1; i <= n; i++)
		{
			sum+=t*f(i);
			t = -1*t;
			//printf("%d\n", t);
		}
		printf("%.2f\n", sum);
	}

	return 0;
}
double f(int i)
{
	return 1.0 / i;
}