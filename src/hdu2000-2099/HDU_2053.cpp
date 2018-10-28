#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		bool ans = false;
		for (int i = 1; i <= n; i++)
		{
			if (n%i == 0) ans = !ans;
		}
		if (ans) printf("%d\n",1);
		else printf("%d\n", 0);
	}
	return 0;
}