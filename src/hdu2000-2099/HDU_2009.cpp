#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		double sum = 0;
		double nn = n;
		for (int i = 0; i < m; i++)
		{
			sum += nn;
			nn = sqrt(nn);
			//printf("%.2f,%.2f\n", sum,nn);
		}

		printf("%.2f\n", sum);
	}

	return 0;
}