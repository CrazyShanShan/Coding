#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

const int maxn = 100 + 5;
int s[maxn];
double dp[maxn];

int main()
{
	int L;
	int N, C, T;
	int VR, VT1, VT2;
	while (scanf("%d%d%d%d%d%d%d", &L, &N, &C, &T, &VR, &VT1, &VT2) != EOF)
	{
		for (int i = 1; i <= N; i++) 
			scanf("%d", &s[i]);
		s[0] = 0;
		s[N+1] = L;
		dp[0] = 0;
		for (int i = 1; i <= N+1; i++)
		{
			double Min = 0x7fffffff;
			for (int j = 0; j <= i - 1; j++)
			{
				double distance = s[i] - s[j];
				double time;
				if (distance <= C) time = distance * 1.0 / VT1;
				else time = C * 1.0/ VT1 + (distance - C) * 1.0 / VT2;
				if (j) time += T;
				Min = min(Min, dp[j] + time);
			}
			dp[i] = Min;
		}
		double timeR = L * 1.0/ VR;
		if (timeR > dp[N + 1]) printf("What a pity rabbit!\n");
		else printf("Good job,rabbit!\n");
	}
	return 0;
}