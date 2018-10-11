#include<stdio.h>
int main()
{
	int f = 1;
	char c;
	while ((c=getchar())!=EOF)
	{
		if (c == '"') {
			if (f) {
				printf("``");
				f = !f;
			}
			else {
				printf("''");
				f = !f;
			}
			//printf("%s", f ? "``" : "''");
			//f = !f;
		}
		else printf("%c",c);
	}
	return 0;
}