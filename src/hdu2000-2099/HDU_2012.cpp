#include<iostream>
#include<algorithm>
using namespace std;
bool is_su(int x);
int main()
{
	int x, y;
	while (scanf("%d%d", &x, &y) != EOF&&x!=0||y!=0)
	{
		int h=1;
		int f;
		for(int i = x; i <= y; i++)
		{
			f = pow(i, 2) + i + 41;
			//printf("%d ", f);
			if (!is_su(f)) {
				h = 0; 
				break;
			}
		}
		//printf("\n");
		if (h == 0) printf("Sorry\n");
		else printf("OK\n");
	}

	return 0;
}
bool is_su(int x)
{
	int i;
	if (x == 1)return false;
	for ( i = 2; i < x; i++)
	{
		if (x%i == 0)
			return false;
	}
	if(i ==x)
	return true;
}
