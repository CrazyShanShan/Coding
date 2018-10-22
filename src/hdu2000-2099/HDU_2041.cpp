#include<cstdio>
#include<algorithm>
#include<time.h>
using namespace std;
const int maxn = 100000000;
int s[maxn];
int solve(int x)
{
	/*if (x == 1)return 1;
	else if (x == 2)return 1;
	else return solve(x - 1) + solve(x - 2);*/
	s[1] = 1;
	s[2] = 1;
	if (x >= 3) {
		for (int i = 3; i <= x; i++)
		{
			s[i] = s[i - 1] + s[i - 2];
		}
	}
	return s[x];
}
int main()
{
	int n;
	scanf("%d", &n);
	int x;
	while (n--) {
		scanf("%d", &x);
		int ans=solve(x);
		printf("%d\n",ans);
	}
	return 0;
}