#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 1000000 + 10;
char a[maxn], b[maxn];
void change(char* s) {
	int len = strlen(s);
	if (strstr(s, "."))
	{
		for (int i = len - 1; s[i] == '0'; i--) {
			s[i] = '\0';
			len--;
		}
	}
	if (s[len - 1] == '.') {
		s[len - 1] = '\0';
	}
}
int main()
{
	while (scanf("%s%s", &a, &b) == 2)
	{
		change(a);
		change(b);
		if (strcmp(a, b) == 0) {
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}