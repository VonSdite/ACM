#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

long long quickpower(long long a, int b)
{
    long long ans = 1;
    while (b)
    {
        if(b & 1) ans = a*ans % mod;
        b >>= 1;
        a = a*a % mod;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        long long ans = quickpower(27, n)-quickpower(7, n);
        // 注意取余之后可能导致前面的数比后面的数小于使得答案为负
        // 此时只要加回一个mod即可
        if(ans < 0) ans += mod;
        printf("%I64d\n", ans);
    }
    return 0;
}