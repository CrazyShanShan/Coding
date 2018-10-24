#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 10000 + 10;
long long s[maxn];
int main()
{
	int n;
	cin >> n;
	s[1] = 2;
	for (int i = 2; i <= 10000; i++)
	{
		s[i] = s[i - 1] + 4 * (i - 1) + 1;
	}
	while (n--)
	{
		int a;
		cin >> a;
		cout << s[a] << endl;
	}
	return 0;
}