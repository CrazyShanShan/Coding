#include<iostream>
#include<algorithm>
#define maxn 1000000000
char s[maxn];
using namespace std;
int main()
{
	int n,len;
	scanf("%d", &n);
	getchar();
	while (n--)
	{
		int yes = 1;
		scanf("%s", s);
		len = strlen(s);
		for (int i = 0; i < len / 2; i++)
		{
			if (s[i] != s[len - 1- i]){
				yes = 0;
				break;
			}
		}
		if (yes) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}