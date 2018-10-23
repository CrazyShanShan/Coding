#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 55;
long long s[maxn];
long long sovle(int n)
{
	s[1] = 1;
	s[2] = 2;
	if (n >= 3) {
		for (int i = 3; i <= n; i++)
		{
			s[i] = s[i - 1] + s[i - 2];
		}
	}
	return s[n];
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%lld\n",sovle(n));
	}
	return 0;
}