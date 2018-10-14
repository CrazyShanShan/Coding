#include<iostream>
#include<algorithm>
#define maxn 100+10
using namespace std;
int main()
{
	int n, m;
	int s[maxn];
	while (scanf("%d%d", &n, &m) == 2)
	{
		getchar();
		if (n == 0 && m == 0)break;
		int i;
		for (i = 0; i < n + 1; i++)
		{
			scanf("%d", &s[i]);
			if (m >= s[i]) continue;
			else {
				s[i + 1] = s[i];
				s[i] = m;
				i += 2;
				break;
			}
		}
		//printf("%d", i);
		for (int j = 0; j < i; j++)
		{
			if (j == i - 1)printf("%d", s[j]);
			else printf("%d ", s[j]);
		}
		int a;
		for (; i < n + 1; i++)
		{
			scanf("%d", &a);
			printf(" %d", a);
		}
		printf("\n");

	}
	return 0;
}