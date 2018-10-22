#include<cstdio>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		int len = s.length();
		if (len >= 8 && len <= 16) {
			int ye1 = 1, ye2 = 1, ye3 = 1, ye4 = 1;
			int flag = 0;
			for (int i = 0; i < len; i++) {
				if (flag >= 3)break;
				if (s[i] >= 'A'&&s[i] <= 'Z') {
					if (ye1) {
						ye1 = 0;
						flag++;
					}
					continue;
				}
				else if (s[i] >= 'a'&&s[i] <= 'z') {
					if (ye2) {
						ye2 = 0;
						flag++;
					}
					continue;
				}
				else if (s[i] >= '0'&&s[i] <= '9')
				{
					if (ye3) {
						ye3 = 0;
						flag++;
					}
					continue;
				}
				else if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'){
					if (ye4) {
						ye4 = 0;
						flag++;
					}
				}
			}
			printf("%s\n", (flag >= 3) ? "YES" : "NO");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}