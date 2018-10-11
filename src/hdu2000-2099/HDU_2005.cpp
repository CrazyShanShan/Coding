#include<iostream>
#include<algorithm>
#define month 12+3
int mothday[month] = {31,-1,31,30,31,30,31,31,30,31,30,31};
bool is_pin(int y);
using namespace std;
int main()
{
	int y, m, d;
	while (scanf("%d/%d/%d", &y, &m, &d)!=EOF)
	{
		if (is_pin(y))
		{
			mothday[1] = 28;
		}
		else {
			mothday[1] = 29;
		}
		//cout << y << "," << m << "," << d << endl;
		int days = d;
		for (int i = 0; i < m - 1; i++)
		{
			days += mothday[i];
		}
		printf("%d\n", days);
	}

	return 0;
}

bool is_pin(int y)
{
	bool result;
	if ((y % 4 == 0&& y % 100 != 0)|| y % 400 == 0)
	{
		result = false;
	}
	else 
		result= true;
	return result;
}