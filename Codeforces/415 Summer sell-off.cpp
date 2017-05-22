#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
long long k[SIZE], l[SIZE];
long long h[SIZE];

bool cmp(const long long &a, const long long &b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    // freopen("1input.txt", "r", stdin);
    int n, f;
    long long sum;
    while (~scanf("%d %d", &n, &f))
    {
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d %I64d", &k[i], &l[i]);
            sum += min(k[i], l[i]);
            l[i] -= k[i];
            h[i] = (k[i]>=l[i])?l[i]:k[i];
        }

        sort(h, h+n, cmp);
        for (int i = 0; i < f; ++i)
        {
            if(h[i]<0) continue;
            sum += h[i];
        }
        printf("%I64d\n", sum);
    }
    return 0;
}