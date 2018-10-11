#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	double a;
	while (scanf("%lf", &a) != EOF)
	{
		printf("%.2f", abs(a));
		printf("\n");
	}
	return 0;
}