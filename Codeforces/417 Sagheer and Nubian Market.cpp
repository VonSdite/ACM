#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
long long a[SIZE];
long long b[SIZE];
int n, s;
long long tmp, t, k;

long long judge(long long k)
{
    for (int i = 0; i < n; ++i)
    {
        b[i] = a[i] + (i+1)*k;
    }
    sort(b, b+n);
    long long sum = 0;
    for (int i = 0; i < k; ++i)
    {
        sum += b[i];
    }
    return sum;
}

int main(int argc, char const *argv[])
{
    while (~scanf("%d %d", &n, &s))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d", &a[i]);
        }
        long long l = 0, r = n;
        while (l <= r)
        {
            k = (l+r)/2;
            tmp = judge(k);
            if(tmp > s)
            {
                r = k-1;
            }
            else 
            {
                l = k+1;
                t = tmp;
            }
        }
        k = r;
        printf("%I64d %I64d\n", k, t);
    }
    return 0;
}