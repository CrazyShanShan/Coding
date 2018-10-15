#include<iostream>
#include<algorithm>
#define maxn 100+10
char s[maxn];
using namespace std;
int main()
{
	while (scanf("%s", s) != EOF)
	{   
		int len = strlen(s);
		char c = 'A';
		int temp_len;
		for (int i = 0; i < len; i++)
		{
			temp_len = s[i] - 'A';
			if (temp_len > c - 'A') {
				c = s[i];
			}
		}
		//printf("%c\n", c);
		for (int i = 0; i < len; i++)
		{
			if (s[i] != c)
				printf("%c", s[i]);
			else
				printf("%c(max)", s[i]);
		}
		printf("\n");
	}
	return 0;
}