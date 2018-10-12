#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T;
	while (scanf("%d", &T) == 1 && T != 0)
	{
		double a;
		int b=0,c=0,d=0;
		while (T--)
		{
			scanf("%lf", &a);
			if (a < 0) b++;
			else if (a == 0)c++;
			else d++;
		}
		printf("%d %d %d\n",b,c,d);
	}

	return 0;
}