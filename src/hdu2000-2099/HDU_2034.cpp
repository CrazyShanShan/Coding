#include<iostream>
#include<algorithm>
const int maxn = 110;
int in[maxn];
int im[maxn];
int ans[maxn];
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		if (n == 0 && m == 0)break;
		for (int i = 0; i < n; i++)
			scanf("%d", &in[i]);
		for (int i = 0; i < m; i++)
			scanf("%d", &im[i]);
		int yes = 0, t = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++)
			{
				if (in[i] == im[j]) yes = 1;
			}
			if (yes == 0) ans[t++] = in[i];
			yes = 0;
		}
		if (t == 0) printf("NULL");
		else {
			sort(ans, ans + t);
			for (int i = 0; i < t; i++)
			{
				printf("%d ", ans[i]);
			}			
		}
		printf("\n");
	}

	return 0;
 }