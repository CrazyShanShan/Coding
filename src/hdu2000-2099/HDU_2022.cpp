#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n)!=EOF)
	{
		getchar();
		int a;
		int aMax = 0;
		int mx = 1, ny = 1;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				scanf("%d", &a);
				if (abs(a) > abs(aMax)) {
					aMax = a;
					mx = i + 1;
					ny = j + 1;
				}
			}
			getchar();
		}
		printf("%d %d %d\n", mx, ny, aMax);

	}

	return 0;
}