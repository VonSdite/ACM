#include <bits/stdc++.h>

using namespace std;

const long long MOD = 1e9+7;
const int SIZE = 3e5+5;
long long x[SIZE];

long long qp(long long a, int b)
{
    long long res = 1;
    while (b)
    {
        if(b & 1) res = (res*a) %MOD;
        b >>= 1;
        a = (a*a) % MOD;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    // freopen("1input.txt", "r", stdin);
    int n;

    long long sum;
    long long p, pp, re;
    int d, ci, tmp, tm;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d", &x[i]);
        }
        if(n>2)
        {
            p = pp = 1;
            d = n - 2;
            tmp = d;
            tm = 1;
            p = qp(2, tmp);
            --tmp;
            ci = (d+1)/2;
            sum = 0;
            sort(x, x+n);

            re = (x[n-1]-x[0])%MOD;
            for (int i = 1; i <= ci; ++i)
            {
                sum += ((p + pp)%MOD) * re;
                sum %= MOD;

                re = (re+x[n-1-i]-x[i])%MOD; 
                pp = qp(2, tm);
                p = qp(2, tmp);
                --tmp;
                ++tm;
            }
            if(!(d&1)) sum += pp%MOD * re;
            sum %= MOD;
            printf("%I64d\n", sum);
        }
        else if(1 == n)
        {
            printf("0\n");
        }
        else if(2 == n)
        {
            printf("%I64d\n", abs(x[1]-x[0])%MOD);
        }
    }
    return 0;
}