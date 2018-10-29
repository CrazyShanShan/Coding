#include<cstdio>
#include<algorithm>
using namespace std;
int f(char x) {
	if (x >= 'a'&&x <= 'z') {
		return -(x - 'a' + 1);
	}
	else if (x >= 'A'&&x <= 'Z')
	{
		return x - 'A' + 1;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		getchar();
		char x;
		int y;
		scanf("%c %d", &x, &y);
		int ans = y + f(x);
		printf("%d\n", ans);
	}
	return 0;
}