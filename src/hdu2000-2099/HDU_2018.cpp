#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    //方法1
	// int n;
	// while (scanf("%d", &n) != EOF&&n!=0)
	// {
	// 	int cow1, cow2, cow3, cow4;//分别表示牛的年龄，只记做1,2,3,4
	// 	cow1 = cow2 = cow3 = 0;
	// 	cow4 = 1;
	// 	for (int i = 0; i < n-1; i++)
	// 	{
	// 		cow4 = cow4 + cow3;
	// 		cow3 = cow2;
	// 		cow2 = cow1;
	// 		cow1 = cow4;
	// 		//printf("%d %d %d %d\n", cow4, cow1, cow2, cow3);
	// 	}
	// 	int cow = cow1 + cow2 + cow3 + cow4;
	// 	printf("%d\n", cow);
	// }

	// return 0;

   // 方法2
    int n;
	while (scanf("%d", &n) != EOF&&n!=0)
	{
		int a = 1, b = 2, c = 3,temp;
		if (n > 0 && n < 4)printf("%d\n", n);
		else {
			for (int i = 0; i < n-3; i++)
			{
				temp = b;
				b = c;
				c = a + c;
				a = temp; 
			}
			printf("%d\n", c);
		}
	}

	// return 0;
}