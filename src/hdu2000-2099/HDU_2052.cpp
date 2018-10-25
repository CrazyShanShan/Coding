#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n, m;
	while (cin >> n >> m)
	{
		for (int i = 0; i <= m + 1; i++)
		{
			for (int j = 0; j <= n + 1; j++)
			{
				if (i == 0 || i == m + 1) {
					if (j == 0 || j == n + 1)cout << "+";
					else cout << "-";
				}
				else {
					if (j == 0 || j == n + 1)cout << "|";
					else cout << " ";
				}
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}