#include<iostream>
#include<algorithm>
#define maxn 100
int sq[maxn];
using namespace std;

int main()
{
	//�ⷨһ
	//int m, n;
	//while (scanf("%d%d",&m,&n)!=EOF)
	//{
	//	int first=1,yes=0;

	//	for (int i = m,ii=i; i <= n; i++,ii=i)
	//	{
	//		int sum = 0, sumi = 0;
	//		int temp;
	//		while (ii)
	//		{
	//			temp = ii % 10;
	//			sumi = pow(temp, 3);
	//			sum += sumi;
	//			ii /= 10;
	//		//	printf("%d %d %d\n",temp,ii,sum);
	//		}
	//		if (i == sum)
	//		{
	//			if (first)
	//			{
	//				printf("%d", i);
	//				first = 0;
	//			}
	//			else {
	//				printf(" %d", i);
	//			}
	//			yes = 1;
	//		}
	//	}
	//	if (!yes) {
	//		printf("no");
	//	}
	//	printf("\n");
	//}

	//�ⷨ��
	int s, t = 0;
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				s = pow(i, 3) + pow(j, 3) + pow(k, 3);
				if (s == i * 100 + j * 10 + k)
				{
					//printf("%d ", s);
					sq[t++] = s;
				}
			}
		}
		//if (s > 999)break;
	}
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF)
	{
		int first = 1, yes = 0;
		for (int i = 0; i < t; i++)
		{
			if (sq[i] >= m&&sq[i] <= n)
			{
				if (first)
				{
					printf("%d", sq[i]);
					first = 0;
				}
				else {
					printf(" %d", sq[i]);
				}
				yes = 1;
			}
		}

		if (!yes) {
			printf("no");
		}
			printf("\n");
	}

	return 0;
}