#include<iostream>
#include<algorithm>
using namespace std;
char des[11] = { 'E','E','E','E','E','E','D','C','B','A','A' };
int main()
{
	int a;
	while (scanf("%d", &a)!=EOF)
	{
		if (a > 100 || a < 0)
		{
			printf("Score is error!\n");
		}
		else {
			a /= 10;
			printf("%c\n", des[a]);
		}
	}

	return 0;
}