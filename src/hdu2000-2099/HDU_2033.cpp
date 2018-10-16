#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	getchar();
	int h, m, s, h1, m1, s1;
	while (n--)
	{
		scanf("%d%d%d%d%d%d", &h, &m, &s, &h1, &m1, &s1);
		h = ((s + s1) / 60 + m + m1) / 60 + h + h1;
		m = ((s + s1) / 60 + m + m1) % 60;
		s = (s + s1) % 60;
		printf("%d %d %d\n", h, m, s);
		getchar();
	}
	return 0;
}