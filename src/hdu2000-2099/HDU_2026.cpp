#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	char c;
	int yes=1;
	while ((c = getchar()) != EOF)
	{
		if (c == '\n') { 
			printf("\n");
			yes = 1;
			continue;
		}
		if (isalpha(c))
		{
			if (yes) { printf("%c", toupper(c)); yes = 0; }
			else printf("%c",c);
		}else{
			yes = 1;
			printf("%c", c);
		}
	}

	return 0;
}