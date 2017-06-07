#include <bits/stdc++.h>

using namespace std;

// 10
// 10
// In first sample case, there are numbers 1, 2, 5 and 10 in the shop. 10 isn't divisible by any perfect square, so 10 is lovely.

// 12
// 6
// In second sample case, there are numbers 1, 2, 3, 4, 6 and 12 in the shop. 12 is divisible by 4 = 22, so 12 is not lovely, while 6 is indeed lovely.

// 结果为所有质因子的乘积。
// 好好理解for循环的过程
int main(int argc, char const *argv[])
{
    long long n, ans, tm;
    while (~scanf("%I64d", &n))
    {
        ans = 1;
        tm = n;
        for (long long i = 2; i*i <= n; ++i)
        {
            if(!(tm%i))
            {
                ans *= i;
                // 比如i=2时，n可以被i整除
                // 以下的循环就会把n里面的2的倍数筛掉
                // i=3时会筛掉3的倍数
                // 和素数筛选法性质相同
                while (!(tm%i)) tm /= i;
            }
        }
        if(tm > 1) ans *= tm;
        printf("%I64d\n", ans);
    }
    return 0;
}