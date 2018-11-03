#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF) {
		while (n--)
		{
			int a, b, c;
			scanf("%d%d%d", &a, &b, &c);
			int colorSum = 2 + 3 + 4 + 5 + 6 + 7;
			if (a > 6) { //if red ball exists
				b += 8 * (a - 6) + colorSum;
			}
			else { //if red ball doesn't exist
				int k = 8 - a;
				for (int i = 1; i <= a; i++)
				{
					b += k;
					k++;
				}
			}
			printf("%s\n", b >= c ? "Yes" : "No");
		}
	}
	return 0;
}