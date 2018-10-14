#include<iostream>
#include<algorithm>
#define maxn 100+10
bool compare(int a, int b);
using namespace std;
int main()
{
	int n;
	int s[maxn];
	while (scanf("%d", &n)==1)
	{
		if (n == 0)break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d",&s[i]);
		}
		sort(s, s + n,compare);
		for (int i = 0; i < n; i++)
		{
			if(i!=n-1)
				printf("%d ", s[i]);
			else printf("%d", s[i]);
		}
		printf("\n");
		getchar();
	}
}

bool compare(int a,int b)
{
	return abs(a) > abs(b);
}