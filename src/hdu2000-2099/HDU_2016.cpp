#include<iostream>
#include<algorithm>
#define maxn 100+10
int s[maxn];
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n)== 1&&n!=0)
	{
		int i = 0,nn=n;
		scanf("%d", &s[i++]);
		nn--;
		int min = s[0];
		int minx = 0;
		while (nn--)
		{
			scanf("%d", &s[i]);
			if (min > s[i])
			{
				min = s[i];
				minx = i;
			}
			i++;
		}
		int temp = s[0];
		s[0] = s[minx];
		s[minx] = temp;
		for (int i = 0; i < n; i++)
		{
			if (i == n - 1) printf("%d", s[i]);
			else {
				printf("%d ", s[i]);
			}
		}
		printf("\n");
	}

	return 0;
}