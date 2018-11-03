#include<cstdio>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int N;
	cin >> N;
	while (N--)
	{
		int K;
		cin >> K;
		double G = 0;
		double P = 0;
		int y = 1;
		for (int i = 0; i < K; i++)
		{
			string cn;
			double c, s;
			cin >> cn;
			cin >> c >> s;
			if (s < 60) y = 0;
			G += c*s;
			P += c;
		}
		if (y) printf("%.2f\n", G * 1.0 / P);
		else printf("Sorry!\n");
		if (N)cout << endl;
	}
	return 0;
}
