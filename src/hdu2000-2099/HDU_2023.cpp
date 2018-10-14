#include<iostream>
#include<algorithm>
#define maxn 50+5
#define maxm 5+5
int s[maxn][maxm];
double ave_student[maxn];
double ave_class[maxm];
using namespace std;
int main()
{
	int n,m;
	int first = 1;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		
		int sum = 0;
		getchar();
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				scanf("%d", &s[i][j]);
				sum += s[i][j];
			}
			ave_student[i] = sum*1.0 / m;
			//printf("%.2f\n", sum*1.0/n);
			sum = 0;
		}

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				sum += s[j][i];
			}
			ave_class[i] = sum*1.0 / n;
			//printf("%.2f\n", sum*1.0 / m);
			sum = 0;
		}

		int num = n;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (s[i][j] < ave_class[j])
				{
					num--;
					break;
				}
			}
		//	printf("%d", num);
		}
		
		for (int i = 0; i < n; i++) {
			if(i!=n-1)
				printf("%.2f ", ave_student[i]);
			else printf("%.2f\n", ave_student[i]);
		}
		for (int i = 0; i < m; i++)
		{
			if (i != m - 1)
				printf("%.2f ", ave_class[i]);
			else printf("%.2f\n", ave_class[i]);
		}
		printf("%d\n", num);
		printf("\n");
	}
	return 0;
}