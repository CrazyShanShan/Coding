#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int m, n;
	while (scanf("%d%d", &m, &n) != EOF)
	{
		int temp;
		if (m > n)
		{
			temp = n;
			n = m;
			m = temp;
		}
		int x=0, y=0;
		for (int i = m; i <= n; i++)
		{
			if (i % 2 == 0)x += i*i;
			else y += i*i*i;
		}
		printf("%d %d\n", x, y);
	}

	return 0;
}