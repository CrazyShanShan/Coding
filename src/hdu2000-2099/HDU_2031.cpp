#include<iostream>
#include<algorithm>
#define maxn 1000000
char des[16] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int ans[maxn];
void solve(int n, int m);
int i = 0;
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		if (n == 0)printf("0\n");
		solve(abs(n), m);
		if (n < 0)printf("-");
		while (i>0)
		{
			i--;
			printf("%c", des[ans[i]]);
		}
		printf("\n");
	}

	return 0;
}
void solve(int n, int m)
{
	while (n / m != 0)
	{
		ans[i++] = n%m;
		n = n / m;
	}
	ans[i++] = n%m;

}