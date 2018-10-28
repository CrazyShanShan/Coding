#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    double a,b;
    while(scanf("%lf%lf",&a,&b) == 2)
    {
        if(a==b) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}