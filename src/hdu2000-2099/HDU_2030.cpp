#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	char c;
	while (n--)
	{
		int num=0;
		while ((c = getchar())!= EOF&&c!='\n')
		{
			if (c < 0) num++;
		}
		printf("%d\n", num/2);
	}

	return 0;
}