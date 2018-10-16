#include<iostream>
#include<algorithm>
#define maxn 30+5
int first = 1;
int s[maxn][maxn];
using namespace std;
void output(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if(j==0)
				printf("%d", s[i][j]);
			else printf(" %d", s[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
int main()
{
	memset(s, 0, sizeof(s));
	for (int i = 0; i < 30; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0) s[i][j] = 1;
			else s[i][j] = s[i - 1][j] + s[i-1][j-1];
		}
	}
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		output(n);
	}
	return 0;
}