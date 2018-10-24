#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 25;
long long s[maxn];
long long u[maxn];
int main()
{
	int n;
	cin >> n;
	long long t = 1;
	u[0] = 1;
	s[1] = 0;
	s[2] = 1;
	for (int i = 1; i <= 20; i++)
	{
		t *= i;
		u[i] = t;
		if(i>=3)
			s[i] = (i - 1)*(s[i - 1] + s[i - 2]);
	}

	while (n--)
	{
		int a, b;
		cin >> a >> b;
		long long ans = u[a] / u[b] / u[a - b] * s[b];
		printf("%lld\n", ans);
	}

	return 0;
}