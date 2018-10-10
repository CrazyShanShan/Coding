#include<stdio.h>
#include<string.h>
#define maxn 1000+10
#define maxm 50+10
#define maxc 150
char s[maxm][maxn];
char ans[maxn];
char dess[maxc];
char des[4] = { 'A','C','G','T'};
int main()
{
	int T;//test cases
	scanf("%d", &T);
	int first = 1;
	while (T--)
	{	
		int t = 0;//输出的数字
		dess['A'] = 0;
		dess['G'] = 0;
		dess['T'] = 0;
		dess['C'] = 0;
		memset(s,0,sizeof(s));
		memset(ans, 0, sizeof(ans));
		int m, n;//m代表number，n代表length
		scanf("%d %d",&m,&n);
		getchar();//开始这里没有写
		for (int i = 0; i < m; ++i)
		{
			scanf("%s", s[i]);
		}	
		for (int i = 0; i < n; i++)
		{	
			for (int j = 0; j < m; j++)
			{
				dess[s[j][i]]++;//统计每一列中AGTC的数量
			}
			int mx=dess[des[0]];//数目最大
			char mc=des[0];//每一列中数量最大的字符
			for (int k = 1; k < 4; k++)
			{
				if (mx < dess[des[k]])
				{
					mx = dess[des[k]];
					mc = des[k];
				}
			}
			ans[i] = mc;
			t += (m - mx);
			dess['A'] = 0;
			dess['G'] = 0;
			dess['T'] = 0;
			dess['C'] = 0;
		}
		printf("%s\n",ans);
		printf("%d\n", t);
	}

	return 0;
}


