#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m;
	while (scanf("%d%d", &n, &m) != EOF)
	{
		int k = 0;
		int a = 0;
		int sum = 0;
		int i = 0;
		int first=1;
		for ( i = 0; i < n; i++)
		{
			a += 2;
			sum += a;
			k++;
			if (k == m) {
				if (first) {
					printf("%d", sum / m);
					first = !first;
				}
				else {
					printf(" %d", sum / m);
				}
				k = 0;
				sum = 0;
			}
		}
		if (i == n && k<m &&k) {
			if (first)
				printf("%d", sum / k);
			else
				printf(" %d", sum / k);
		}

		printf("\n");
	}
	

	return 0;
}