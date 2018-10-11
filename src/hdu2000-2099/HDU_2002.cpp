#include<iostream>
#include<algorithm>
#define PI 3.1415927
using namespace std;
int main()
{
	double r;
	while (scanf("%lf",&r)!=EOF)
	{
		double ans = 4*1.0/3*PI*r*r*r;
		printf("%.3f\n",ans);
	}
	return 0;
}