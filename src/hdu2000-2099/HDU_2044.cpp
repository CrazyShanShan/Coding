#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 55;
long long s[maxn];
long long solve(int a, int b)
{
	int len = b - a;
	s[1] = 1;
	s[2] = 2;
	if (len >= 3) {
		for (int i = 3; i <= len; i++)
		{
			s[i] = s[i - 1] + s[i - 2];
		}
	}
	return s[len];
}
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		long long ans=solve(a, b);
		printf("%lld\n", ans);
	}
	return 0;
}