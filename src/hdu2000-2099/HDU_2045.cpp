#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 50 + 5;
long long s[maxn];
long long solve(int n)
{
	s[1] = 1;
	s[2] = 2;
	long long temp = 4;
	if (n >= 3) {
		for (int i = 3; i <= n; i++)
		{
			s[i] = temp - s[i-1];
			temp *= 2;
			//printf("s[%d]:%d\n",i,s[i]);
		}
	}
	return s[n]*3;
}
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		printf("%lld\n",solve(n));
	}
	return 0;
}