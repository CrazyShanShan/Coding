#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 45;
long long s[maxn];
long long solve(int n)
{
	s[1] = 3;
	long long a = 1, b = 2;
	for (int i = 2; i <= n; i++)
	{
		s[i] = s[i - 1] * 3 - a;
		a = b;
		b = s[i] - a;
	}
	return s[n];
}
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%lld\n",solve(n));
	}
	return 0;
}
