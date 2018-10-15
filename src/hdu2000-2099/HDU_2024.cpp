#include<iostream>
#include<algorithm>
int first = 1;
bool solve(char c);
using namespace std;
int main()
{
	int T;
	scanf("%d", &T);
	getchar();
	char c;
	while(T--)
	{ 
		bool result =true;
		while ((c = getchar())!=EOF&&c!='\n') {
			if (!solve(c)) result = false; 
		}
		if(result)
			printf("yes\n");
		else 
			printf("no\n");

		first = 1;
	}

	return 0;
}
bool solve(char c)
{
	if (first == 1)
	{
		first = 0;
		if (c == '_'||isalpha(c))
			return true;
		else
			return false;
	}
	else {
		if (c == '_'||isalpha(c)||isdigit(c))return true;
		 else return false;
	}
}