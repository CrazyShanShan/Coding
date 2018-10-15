#include<iostream>
#include<algorithm>
#define maxn 128
int s[maxn];
char ans[5] = {'a','e','i','o','u'};
void sovle(char c);
void output();
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	char c;
	int first = 1;
	while (n--)
	{
		while ((c = getchar()) != EOF&&c != '\n') {
			sovle(c);
		}
		if (first){
			output();
			first = 0;
		}
		else {
			printf("\n");
			output();
		}
	}
	
	return 0;
}

void sovle(char c)
{
	s[c]++;
}

void output()
{
	for (int i = 0; i < 5; i++)
	{
		printf("%c:%d\n", ans[i], s[ans[i]]);
	}
	s['a'] = 0;
	s['e'] = 0;
	s['i'] = 0;
	s['o'] = 0;
	s['u'] = 0;
}