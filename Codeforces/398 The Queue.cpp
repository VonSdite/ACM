#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    long long a, b, t;
    long long m = 1e12 + 10;
    while(~scanf("%I64d %I64d %I64d", &a, &b, &t))
    {
        int n;
        scanf("%d", &n);
        long long ans = 0;
        while (n--) 
        {
            long long k;
            scanf("%I64d", &k);
            if (k <= b - t) 
            { //注意判断输入数据合法
                if (k && max(a, k - 1) <= b - t && (a - k + 1) < m) 
                {
                    m = a - k + 1; //需要等待的最小时间
                    ans = min(a, k - 1);
                }
                a = max(a, k) + t;
            }
        }
        if (a <= b - t) 
        { //这样就可以不用等待
            ans = a;
        }
        printf("%I64d\n", ans);
    }
    return 0;
}