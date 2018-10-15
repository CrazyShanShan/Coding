#include<iostream>
#include<algorithm>
int gcd(int a, int b);
using namespace std;
int main()
{
	int n;
	while (scanf("%d", &n)!=EOF)
	{
		int a,b,temp;
		scanf("%d", &a);
		n--;
		while (n--)
		{
			scanf("%d", &b);
			if (a < b) {
				temp = a;
				a = b;
				b = temp;
			}
			a=a/gcd(a, b)*b;
		}
		printf("%d\n", a);
	}

	return 0;
}
int gcd(int a, int b)
{
	int temp;
	while (a%b != 0)
	{
		temp = b;
		b = a%b;
		a = temp;
		
	}
	return b;
}