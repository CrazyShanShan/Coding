#include<cstdio>
#include<algorithm>
using namespace std;
bool sovle(int a,int b)
{
	int s1 = 0;
	for (int i = 1; i <= a/2; i++)
	{
		if (a%i == 0)s1 += i;
	}
	//printf("%d ", s1);
	int s2 = 0;
	for (int i = 1; i <= b / 2; i++)
	{
		if (b%i == 0)s2 += i;
	}
	//printf("%d", s2);
	return s1 == b&& s2 == a;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a, b;
	while (n--)
	{
		scanf("%d%d", &a, &b);
		if(sovle(a, b)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}