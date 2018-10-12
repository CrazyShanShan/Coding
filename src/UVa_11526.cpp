#include<iostream>
#include<algorithm>
long long solve(int n);
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);

	while (T--)
	{
		int n;
		scanf("%d", &n);
		long long result = solve(n);
		printf("%lld\n", result);
	}

	
	return 0;
}

long long solve(int n)
{
	long long sum = 0;
	int i;
	for ( i = 1; i <= n; i++)
	{
		long long x = n / i - n / (i + 1);
		sum += x*i;
	//	printf("first:%lld ", sum);
		if (x <= 1)break;
	}
	for (i = n / (i + 1); i > 0; i--) sum += n / i;
	return sum;
}