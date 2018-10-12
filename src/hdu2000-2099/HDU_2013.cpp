#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int sum=1;
		n--;
		while (n--)
		{
			sum = (sum + 1) * 2;
		}
		printf("%d\n", sum);
	}

	return 0;
}