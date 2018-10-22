#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a;
		scanf("%d", &a);
		int sum = 3;
		for (int i = 0; i < a; i++)
		{
			sum = (sum - 1) * 2;
		}
		printf("%d\n", sum);
	}
	return 0;
}