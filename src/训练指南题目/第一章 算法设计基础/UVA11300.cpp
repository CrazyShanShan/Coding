#include<cstdio>
#include<algorithm>
using namespace std;

const int maxn = 1000000 + 10;
long long  A[maxn], C[maxn], tot, M;
int main()
{
    int n;
    while(scanf("%d", &n) == 1){ //输入数据大，scanf比cin快
        tot = 0;
        for(int i = 1; i <= n; i++){ scanf("%lld", &A[i]); tot += A[i];}
        M = tot /n;
        C[0] = 0;
        for(int i = 1; i < n; i++){
            C[i] = C[i-1] + A[i] - M;//递推C数组
        }
        sort(C, C+n);
        long long x1 = C[n/2], ans = 0;//计算x
        for(int i = 0; i < n; i++) ans += abs(x1-C[i]);
        printf("%lld", ans);
    }
    return 0;
}