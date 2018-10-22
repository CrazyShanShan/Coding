#include<cstdio>
#include<algorithm>
using namespace std;
struct node {
	int start, end;
	bool operator <(const node& w)const {
		return end < w.end;
	}
}s[105];
int main()
{
	int n;
	while (scanf("%d", &n) == 1)
	{
		if (n == 0)break;
		for (int i = 0; i < n; i++)
		{
			scanf("%d%d", &s[i].start, &s[i].end);
		}
		sort(s, s + n);
		/*for (int i = 0; i < n; i++) {
			printf("start:%d end:%d\n ",s[i].start, s[i].end);
		}*/
		int k = 1;
		int maxi = s[0].end;
		for (int i = 1; i < n; i++)
		{
			if (s[i].end > s[i - 1].end) {
				if (s[i].start >= maxi) {
					k++;
					maxi = s[i].end;
				}
			}
		}
		printf("%d\n", k);
	}
	return 0;
}