#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
const int maxn = 10000000;
char s[maxn];
char t[maxn];
using namespace std;
int main()
{
	while (scanf("%s%s",s,t) == 2)
	{
		int s_len = strlen(s);
		int t_len = strlen(t);
		int k = 0;
		for (int i = 0; i < t_len; i++) {
			if (t[i] != s[k]) continue;
			k++;
		}
		printf("%s\n", k == s_len ? "Yes" : "No");
	}

	return 0;
}