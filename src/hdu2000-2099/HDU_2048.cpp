#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 55;
long long s[maxn];
double sovle(int n)
{
	s[1] = 0;
	s[2] = 1;
	if (n >= 3) {
		for (int i = 3; i <= n; i++)
		{
			s[i] = (i - 1)*(s[i - 1] + s[i - 2]);
		}
	}
	long long t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= i;
	}

	return s[n] * 100 * 1.0 / t;
}
int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		int a;
		cin >> a;
		if (a > 10)a = 10;
		printf("%.2f%%\n", sovle(a));
	}
	return 0;
}