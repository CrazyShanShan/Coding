#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		int nn = n;
		int sum = 0;
		int s;
		scanf("%d", &s);
		sum += s;
		n--;
		int max=s;
		int min=s;
		while (n--)
		{
			scanf("%d", &s);
			if (s < min) min = s;
			if (s > max)max = s;
			sum += s;
		}
		printf("%.2f\n", (sum - max - min)*1.0 / (nn-2));
	}

	return 0;
}