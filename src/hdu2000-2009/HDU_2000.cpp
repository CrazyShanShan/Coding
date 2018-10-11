#include<iostream>
#include<algorithm>
using namespace std;
#define maxn 3+5
int main()
{
	char s[maxn];
	while (scanf("%s",s)!=EOF)
	{
		sort(s,s+3);
		printf("%c %c %c\n", s[0], s[1], s[2]);
	}
	
	return 0;
}