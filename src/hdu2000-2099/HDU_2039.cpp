#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	double a, b, c;
	while (n--)
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		if (a + b > c&&a + c > b&&b + c > a)
			printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}