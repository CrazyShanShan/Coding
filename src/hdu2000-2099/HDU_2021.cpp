#include<iostream>
#include<algorithm>
using namespace std;
int s[6] = { 100,50,10,5,2,1 };
int solve(int n);
int main()
{
	int n,a,ni;
	while (scanf("%d", &n) == 1)
	{
		int sum = 0;
		getchar();
		if (n == 0)break;
		while (n--)
		{
			scanf("%d", &a); 
			 ni=solve(a);
			 sum += ni;
		}
		printf("%d\n",sum);
	}

	return 0;

}
int solve(int a)
{
	int n = 0;
	for (int i = 0; i < 6; i++)
	{
		/*while (a - s[i] >= 0)
		{
			a -= s[i];
			n++;
			if (a == 0)return n;
		}*/
		n += a / s[i];
		a = a%s[i];
		if (a == 0) return n;
	}
}