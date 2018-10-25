#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 1000 + 5;
int s[maxn];
int main()
{
	int n;
	while (scanf("%d",&n)!=EOF)
	{
		int i = 0;
		while (n>0)
		{
			s[i++] = n % 2;
			n /= 2;
		}
		while (i--)
		{
			cout << s[i];
		}
		cout << endl;
	}
	return 0;
}