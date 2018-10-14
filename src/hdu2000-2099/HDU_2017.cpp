#include<iostream>
#include<algorithm>
#define maxn 1000
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);
	getchar();
	char a;
	int num = 0;
	while (T--)
	{
		while (scanf("%c",&a)&&a!='\n')
		{
			if (isdigit(a)) num++;
		}
		printf("%d\n", num);
		num = 0;
	}

	return 0;
}