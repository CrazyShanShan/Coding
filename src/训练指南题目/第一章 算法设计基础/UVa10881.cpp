#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 10010;
struct Ant {
	int id;		//蚂蚁输入的位置
	int p;		//蚂蚁在坐标轴上的位置
	int d;		//方向：-1向左，0转弯，1向右
	bool operator < (const Ant& a) {
		return p < a.p;
	}
}before[maxn], after[maxn];

const char dirName[][10] = { "L","Turning","R" };
int order[maxn];	//第i个蚂蚁在坐标轴上的位置

int main()
{
	int	K;
	scanf("%d", &K);
	for (int kase = 1; kase <= K; kase++)
	{
		printf("Case #%d:\n", kase);
		int L, t, n;
		scanf("%d%d%d", &L, &t, &n);
		for (int i = 0; i < n; i++)
		{
			int p;
			int d;
			char c;
			scanf("%d %c", &p, &c);
			d = (c == 'L') ? -1 : 1;
			before[i] = {i, p, d};	//蚂蚁的初始位置
			after[i] = {0 ,p + t * d, d};	//蚂蚁的移动后的位置
		}

		//初始化order
		sort(before, before + n);
		for (int i = 0; i < n; i++)
			order[before[i].id] = i;

		//调整方向
		sort(after, after + n);
		for (int i = 0; i < n - 1; i++) {
			if (after[i].p == after[i + 1].p)
				after[i].d = after[i + 1].d = 0;
		}
		//输出结果
		for (int i = 0; i < n; i++)
		{
			int a = order[i];
			if (after[a].p<0 || after[a].p>L)
				printf("Fell off\n");
			else 
			{	
				printf("%d %s\n", after[a].p, dirName[after[a].d + 1]);
			}
		}
		printf("\n");
	}
	return 0;
}