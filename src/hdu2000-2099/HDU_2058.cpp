#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2 && n && m)
	{
		int len = ceil(sqrt(2 * m));
		while (--len) {
			int i = m / len - (len - 1) / 2;
			if (len*(2 * i + len - 1) / 2 == m) {
				printf("[%d,%d]\n", i, i + len - 1);
			}
		}
		printf("\n");
	}
	return 0;
}