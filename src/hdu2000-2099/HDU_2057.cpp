#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
	long long a, b;
	while (scanf("%llx%llx", &a, &b)==2)
	{
		long long result = a + b;
		if(result>=0)
			printf("%llX\n", result);
		else printf("-%llX\n", -result);
	}
	return 0;
}