#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int T = 0;
	while (scanf("%d", &T) != EOF)
	{
		int s = 1;
		int a;
		while(T--)
		{
			scanf("%d", &a);
			if (a % 2 == 1) {
				s *= a;
			}
		}
		printf("%d\n", s);
	}

	return 0;
}