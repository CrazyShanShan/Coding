#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	while (scanf("%d%d", &n, &m) == 2)
	{
		if (n == 0 && m == 0)break;
		int t=1;
		while (m--) {
			t = t*n % 1000;
		}
		printf("%d\n", t);
	}
	return 0;
}