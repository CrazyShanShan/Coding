#include<stdio.h>
#include<string.h>
#define maxn 20
#define number 150
int a[4][2] = { { -1,0 },{ 1,0 },{ 0,-1 },{ 0,1 } };
int dess[number];
int main()
{
	memset(dess, -1, sizeof(dess));
	dess['A'] = 0;
	dess['B'] = 1;
	dess['L'] = 2;
	dess['R'] = 3;
	char s[maxn][maxn];
	int first = 1;
	int kase = 1;
	for (;;)
	{
		scanf("%c", &s[0][0]);
		if (s[0][0] == 'Z') break;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (i == 0 && j == 0)continue;
				scanf("%c", &s[i][j]);
			}
			getchar();
		}
	
		int mx = 0, my = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++) {

				if (s[i][j] == ' ')
				{
					mx = i;
					my = j;
				}
			}
		}

		//读入操作
		char move;
		int q = 1;//输入的数据正确与否
		while ((scanf("%c", &move) != EOF&& move != '0'))
		{
			//略去换行符
			if (move == '\n') continue;
			//判断改变位置以后是否合法
			if (dess[move] == -1) {
				q = 0;
				continue;
			}
			int mmx = mx + a[dess[move]][0];
			int mmy = my + a[dess[move]][1];
			if (mmx >= 0 && mmx <= 4 && mmy >= 0 && mmy <= 4)
			{
				s[mx][my] = s[mmx][mmy];
				s[mmx][mmy] = ' ';
				mx = mmx;
				my = mmy;
			}
			else {
				q = 0;
				continue;
			}
		}
		getchar();
		if (first) {
			first = 0;
		}
		else {
			printf("\n");
		}
		printf("Puzzle #%d:\n", kase++);
		if (q) {
			for (int i = 0; i < 5; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					printf("%c ", s[i][j]);
				}
				printf("%c\n",s[i][4]);
			}
		}
		else {
			printf("This puzzle has no final configuration.\n");
		}
	}


	return 0;
}