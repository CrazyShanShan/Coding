#include<iostream>
#include<algorithm>
#define maxn 4+4
using namespace std;
int main()
{
	double s[maxn];
	while (scanf("%lf%lf%lf%lf", &s[0],&s[1],&s[2],&s[3]) == 4)
	{

		double ans = (s[0] - s[2])*(s[0] - s[2]) + (s[1] - s[3])*(s[1] - s[3]);
		printf("%.2f", sqrt(ans));
		printf("\n");
	}
	
	return 0;
}